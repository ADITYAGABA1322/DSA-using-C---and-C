// Round G 2022
// 1.) Walktober
#include<bits/stdc++.h>
using namespace std ;

#define ll              long long       // 64 bit integer 
#define pb              push_back       // push_back in vector
#define all(v)          v.begin(),v.end()       // all elements of vector
#define sz(a)           (ll)a.size()            // size of vector
#define F               first       // first element of pair
#define S               second      // second element of pair
#define INF             2000000000000000000     // 10^18
#define popcount(x)     __builtin_popcountll(x)     // count set bits   
#define pll             pair<ll,ll>     // pair of long long
#define pii             pair<int,int>       // pair of int
#define ld              long double     // long double

template<typename T, typename U> static inline void amin(T &x, U y){ if(y < x) x = y; }     // minimum of two numbers
template<typename T, typename U> static inline void amax(T &x, U y){ if(x < y) x = y; }     // maximum of two numbers

#ifdef LOCAL        // for local system
#define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)     // for debugging
#else        // for online judge
#define debug(...) 3000     // for debugging
#endif      // for debugging

const int N = 1e5 + 5;      // 10^5
struct node              // node of segment tree
{
    ll sum = -INF;      // sum of elements in range
}fake;      // fake node
struct SEGTREE          
{   
    ll a[N];        // array
    SEGTREE(){ }        // constructor
    node tree[4*N];     // segment tree
    ll lazy[4*N];       // lazy propagation
    inline node combine(node a,node b)      // function to combine two nodes
    {
        node ret;       // return node
        ret.sum=max(a.sum,b.sum);    // sum of two nodes
        return ret;    // return node
    }
    inline node make_node(ll val)   // function to make node from value
    {
        node ret;    // return node
        ret.sum=val;    // sum of node
        return ret;     // return node
    }
    
    inline void pushdown(ll v,ll st,ll en)              // function to pushdown lazy value
    {
        if(lazy[v]==0) return;      // if lazy value is zero then return
        tree[v].sum+=lazy[v];       // add lazy value to sum of node
        if(st!=en)      // if not leaf node
        {
            lazy[2*v]+=lazy[v];     // add lazy value to left child
            lazy[2*v+1]+=lazy[v];   // add lazy value to right child
        }
        lazy[v]=0;      // make lazy value zero
    }
    // {
    //     tree[v].sum+=lazy[v];
    //     if(st!=en)
    //     {
    //         lazy[v<<1]+=lazy[v];
    //         lazy[v<<1 | 1]+=lazy[v];
    //     }
    //     lazy[v]=0;
    //     return ;
    // }
    void buildTree(ll v,ll st,ll en)      // function to build segment tree
    {
        if(st==en)      // if leaf node
        {
            tree[v]=make_node(a[st]);       // make node from value
            return;     // return
        }
        ll mid=(st+en)>>1;      // mid of range
        buildTree(2*v,st,mid);      // build left subtree
        buildTree(2*v+1,mid+1,en);      // build right subtree
        tree[v]=combine(tree[2*v],tree[2*v+1]);     // combine left and right subtree
    }
    // {
    //     lazy[v] = 0;
    //     if(st==en)
    //     {
    //         tree[v]=make_node(a[st]);
    //         return ;
    //     }
    //     ll mid=(st+en)>>1;
    //     buildTree(v<<1,st,mid);
    //     buildTree(v<<1 | 1,mid+1,en);
    //     tree[v]=combine(tree[v<<1],tree[v<<1 | 1]);
    // }
    void update(ll v,ll st,ll en,ll in,ll val)      // function to update value at index in
    {
        pushdown(v,st,en);      // pushdown lazy value
        if(st==en)      // if leaf node
        {
            tree[v]=make_node(val);     // make node from value
            return;     // return
        }
        ll mid=(st+en)>>1;      // mid of range
        if(in<=mid) update(2*v,st,mid,in,val);     // if index is in left subtree
        else update(2*v+1,mid+1,en,in,val);        // if index is in right subtree
        tree[v]=combine(tree[2*v],tree[2*v+1]);     // combine left and right subtree
    }
    // {
    //     ll mid=(st+en)>>1;
    //     if(st==en)
    //     {
    //         tree[v]=make_node(val);
    //         a[st]=val;
    //         return ;
    //     }
    //     if(in<=mid)
    //         update(v<<1,st,mid,in,val);
    //     else
    //         update(v<<1 | 1,mid+1,en,in,val);
    //     tree[v]=combine(tree[v<<1],tree[v<<1 | 1]);
    // }
    void rupdate(ll v,ll st,ll en,ll l,ll r,ll val)     // function to update range [l,r] by val
    {
        pushdown(v,st,en);      // pushdown lazy value
        if(st>r || en<l) return;        // if range is out of range
        if(st>=l && en<=r)      // if range is in range
        {
            lazy[v]+=val;       // add lazy value
            pushdown(v,st,en);      // pushdown lazy value
            return;     // return
        }
        ll mid=(st+en)>>1;      // mid of range
        rupdate(2*v,st,mid,l,r,val);        // update left subtree
        rupdate(2*v+1,mid+1,en,l,r,val);        // update right subtree
        tree[v]=combine(tree[2*v],tree[2*v+1]);     // combine left and right subtree
    }
    // {
    //     if(lazy[v]!=0)
    //     {
    //         pushdown(v,st,en);
    //     }
    //     if(en<l || st>r)return ;
    //     if(st>=l && en<=r)
    //     {
    //         lazy[v]=val;
    //         pushdown(v,st,en);
    //         return ;
    //     }
    //     ll mid=(st+en)>>1;
    //     rupdate(v<<1,st,mid,l,r,val);
    //     rupdate(v<<1 | 1,mid+1,en,l,r,val);
    //     tree[v]=combine(tree[v<<1],tree[v<<1 | 1]);
    // }
    node query(ll v,ll st,ll en,ll l,ll r)          // function to query range [l,r]
    {
        pushdown(v,st,en);      // pushdown lazy value
        if(st>r || en<l) return make_node(-1e18);        // if range is out of range
        if(st>=l && en<=r) return tree[v];      // if range is in range
        ll mid=(st+en)>>1;      // mid of range
        node left=query(2*v,st,mid,l,r);        // query left subtree
        node right=query(2*v+1,mid+1,en,l,r);       // query right subtree
        return combine(left,right);     // combine left and right subtree
    }
    // {
    //     if(en<l || st>r)
    //         return fake;
    //     if(lazy[v]!=0)
    //     {
    //         pushdown(v,st,en);
    //     }
    //     if(st>=l && en<=r)
    //         return tree[v];
    //     ll mid=(st+en)>>1;
    //     return combine(query(v<<1,st,mid,l,r),query(v<<1 | 1,mid+1,en,l,r));
    // }
}seg_0, seg_1;    // declare two segment trees

// 0 means left, 1 means right facing

int _runtimeTerror_()
{
    int m, n, p;
    cin >> m >> n >> p;
    vector<vector<ll>> a(n, vector<ll>(m, 0));
    for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            cin >> a[j][i];
        }
    }
    ll ans = 0;
    for(int i=0;i<n;++i) {
        ans += *max_element(all(a[i])) - a[i][p - 1];
    }
    cout << ans << "\n";
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef runSieve
        sieve();
    #endif
    #ifdef NCR
        initncr();
    #endif
    int TESTS = 1;
    cin >> TESTS;
    for(int i=1;i<=TESTS;++i) {
        cout << "Case #" << i << ": ";
        _runtimeTerror_();
    }
    return 0;
}

