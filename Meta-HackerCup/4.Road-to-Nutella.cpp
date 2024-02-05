// Problem 

// You and your friends have drawn a really big connected graph in sidewalk chalk with N nodes (numbered from 1..N) and 
// M edges Q times, there will be a race from node ai to bi , with a chance to win a coveted hazelnut chocolate snack.
// By the unbreakable rules of hop-scotch, everyone must travel along a path from node ai to bi, using edges in the graph, 
// alternating which foot touches the ground at each node, starting each race with their left foot on ai.

// Your friends will make a mad dash for the chocolate along the shortest path from ai to bi,
// You on the other hand are looking for a more interesting challenge, and are allowed to take any path, potentially including any nodes (even bi)
// multiple times. You want to end at node bi ​, but with the following conditions:
// You must finish on a different foot from everyone who took the shortest path.
// To make things interesting, you'd like to minimize the number of edges you travel through more than once.


// An illustration of the first sample. Your friends take a shortest path (blue), and you can take the path in red. The path in red travels through 
// 1 edge multiple times: the edge connecting nodes 6 and 8.
// For each query, is it possible to fulfill your two conditions? If so, add the minimum number of edges you have to travel through multiple times to your answer. If not, add −1 to your answer.


#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <string>
#include <algorithm>
#include <optional>
#include <stack>
#include <tuple>
#include <numeric>
#include <climits>
#include <functional>
#include <cmath>
#include <cassert>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <iomanip>
#include <random>
#include <chrono>
#include <fstream>
#include <sstream>
#include <complex>
#include <array>
#include <list>
#include <valarray>
#include <iterator>
#include <deque>
#include <forward_list>
#include <utility>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cassert>
#include <random>
#include <chrono>
#include <queue>

struct IO
{
    IO(std::istream &r, std::ostream &w) : r(r), w(w) {}

    template <typename T>
    void write(T s)
    {
        w << s;
    }

    template <typename T>
    T read()
    {
        T val;
        r >> val;
        return val;
    }

    int usize0()
    {
        return read<int>() - 1;
    }

    template <typename T>
    std::vector<T> vec(int n)
    {
        std::vector<T> data(n);
        for (int i = 0; i < n; i++)
        {
            data[i] = read<T>();
        }
        return data;
    }

    std::vector<char> chars()
    {
        std::string s = read<std::string>();
        return std::vector<char>(s.begin(), s.end());
    }

private:
    std::istream &r;
    std::ostream &w;
};

void bridges_dfs(const std::vector<std::vector<int>> &g, int parent, int cur, int depth, std::vector<std::optional<int>> &pre, std::vector<std::optional<int>> &low, std::set<std::pair<int, int>> &edges)
{
    pre[cur] = depth;
    low[cur] = depth;
    for (int child : g[cur])
    {
        if (!pre[child].has_value())
        {
            bridges_dfs(g, cur, child, depth + 1, pre, low, edges);
            low[cur] = std::min(low[cur], low[child]);
            if (low[child] == pre[child])
            {
                edges.insert({cur, child});
                edges.insert({child, cur});
            }
        }
        else if (child != parent)
        {
            low[cur] = std::min(low[cur], low[child]);
        }
    }
}

std::set<std::pair<int, int>> bridges(const std::vector<std::vector<int>> &g)
{
    int n = g.size();
    std::vector<std::optional<int>> pre(n);
    std::vector<std::optional<int>> low(n);
    std::set<std::pair<int, int>> edges;
    bridges_dfs(g, 0, 0, 0, pre, low, edges); // we already know the graph is connected.
    return edges;
}

void bfs_component(const std::vector<std::vector<int>> &g, int cur, int count, std::vector<std::optional<int>> &component, std::vector < std::optional<int> >& depth)
{
    std::queue<std::pair<int, int>> q;
    q.push({cur, 0});
    component[cur] = count;
    depth[cur] = 0;
    while (!q.empty())
    {
        auto [cur, d] = q.front();
        q.pop();
        for (int child : g[cur])
        {
            if (!component[child].has_value())
            {
                depth[child] = d + 1;
                component[child] = count;
                q.push({child, d + 1});
            }
        }
    }
}

std::pair<std::vector<bool>, std::vector<int>> get_components(const std::vector<std::pair<int, int>> &non_bridge_edges, int n)
{
    std::vector<std::vector<int>> g(n);
    for (const auto &e : non_bridge_edges)
    {
        g[e.first].push_back(e.second);
        g[e.second].push_back(e.first);
    }

    std::vector<std::optional<int>> component(n);
    std::vector < std::optional<int> > depth(n);
    int count = 0;

    for (int node = 0; node < n; node++)
    {
        if (!component[node].has_value())
        {
            bfs_component(g, node, count, component, depth);
            count++;
        }
    }

    std::vector<bool> odd(count, false);

    for (const auto &e : non_bridge_edges)
    {
        int d1 = depth[e.first].value();
        int d2 = depth[e.second].value();
        if (d1 % 2 == d2 % 2)
        {
            odd[component[e.first].value()] = true;
        }
    }

    std::vector<int> components;
    for (auto c : component)
    {
        components.push_back(c.value());
    }

    return std::make_pair(odd, components);
}

std::pair<std::vector<std::vector<int>>, std::vector<int>> read_graph(IO &sc)
{
    int n = sc.read<int>();
    int m = sc.read<int>();
    std::vector<std::pair<int, int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u = sc.read<int>();
        int v = sc.read<int>();
        edges.push_back({u - 1, v - 1});
    }
    std::vector<std::vector<int>> g(n, std::vector<int>());
    for (const auto &e : edges)
    {
        g[e.first].push_back(e.second);
        g[e.second].push_back(e.first);
    }
    return std::make_pair(edges, g);
}

struct Query
{
    int u;
    int v;
    int cu;
    int cv;
    int lca;
    long long ans;
};

std::vector<Query> read_queries(IO &sc)
{
    int q = sc.read<int>();
    std::vector<Query> queries;
    for (int i = 0; i < q; i++)
    {
        int u = sc.read<int>();
        int v = sc.read<int>();
        queries.push_back({u - 1, v - 1, 0, 0, 0, LLONG_MAX});
    }
    return queries;
}

std::vector<std::pair<int, int>> dfs_g(const std::vector<std::vector<int>> &g)
{
    int n = g.size();
    std::vector<bool> visited(n, false);
    std::vector<std::pair<int, int>> edges;
    std::stack<int> stack;
    stack.push(0);
    visited[0] = true;
    while (!stack.empty())
    {
        int node = stack.top();
        stack.pop();
        for (int child : g[node])
        {
            if (!visited[child])
            {
                visited[child] = true;
                edges.push_back({node, child});
                stack.push(child);
            }
        }
    }
    return edges;
}

void dfs_cost_below(const std::vector<std::vector<int>> &tree, int node, std::vector<long long> &cost)
{
    for (int child : tree[node])
    {
        dfs_cost_below(tree, child, cost);
        cost[node] = std::min(cost[node], cost[child] + 1);
    }
}

void dfs_cost_above(const std::vector<std::vector<int>> &tree, int node, std::vector<long long> &cost)
{
    for (int child : tree[node])
    {
        cost[child] = std::min(cost[child], cost[node] + 1);
        dfs_cost_above(tree, child, cost);
    }
}

std::tuple<std::vector<std::vector<int>>, std::vector<int>, std::vector<long long>, std::vector<std::vector<int>>, std::vector<int>> get_component_tree(IO &sc)
{
    auto [edges, g] = read_graph(sc);
    int n = g.size();
    std::set<std::pair<int, int>> bridge_edges = bridges(g);
    std::vector<std::pair<int, int>> non_bridge_edges;
    for (const auto &e : edges)
    {
        if (bridge_edges.find(e) == bridge_edges.end())
        {
            non_bridge_edges.push_back(e);
        }
    }
    auto [odd, component] = get_components(non_bridge_edges, n);
    std::vector<std::vector<int>> tree(odd.size(), std::vector<int>());
    std::vector <std::vector<std::optional<int> > parent(odd.size(), std::vector<std::optional<int > >(30));
    std::vector<int> level(odd.size());
    for (const auto &e : dfs_g(g))
    {
        int u = e.first;
        int v = e.second;
        if (component[u] != component[v])
        {
            level[component[v]] = level[component[u]] + 1;
            parent[component[v]][0] = component[u];
            tree[component[u]].push_back(component[v]);
        }
    }
    for (int i = 0; i < tree.size(); i++)
    {
        for (int k = 1; k < 30; k++)
        {
            if (parent[i][k - 1].has_value())
            {
                parent[i][k] = parent[parent[i][k - 1].value()][k - 1];
            }
        }
    }
    std::vector<long long> cost(odd.size(), 0);
    for (bool ok : odd)
    {
        cost.push_back(ok ? 0 : LLONG_MAX);
    }
    dfs_cost_below(tree, 0, cost);
    dfs_cost_above(tree, 0, cost);
    return std::make_tuple(tree, component, cost, parent, level);
}

int get_lca(const std::vector<std::vector<std::optional<int>>> &parent, int cu, int cv, const std::vector<int> &level)
{
    if (level[cu] < level[cv])
    {
        std::swap(cu, cv);
    }
    for (int k = 30; k >= 0; k--)
    {
        if (level[cu] >= level[cv] + (1 << k) && parent[cu][k].has_value())
        {
            cu = parent[cu][k].value();
        }
    }
    if (cu == cv)
    {
        return cu;
    }
    for (int k = 30; k >= 0; k--)
    {
        if (parent[cu][k] != parent[cv][k])
        {
            cu = parent[cu][k].value_or(cu);
            cv = parent[cv][k].value_or(cv);
        }
    }
    return parent[cu][0].value_or(cu);
}

void dfs(const std::vector<std::vector<int>> &tree, int node, const std::vector<long long> &cost, SegmentPoint<int, Min> &segment_tree, const std::vector<int> &level, const std::vector<std::vector<int>> &node_queries, std::vector<Query> &queries)
{
    segment_tree.modify(level[node], cost[node]);
    for (int i : node_queries[node])
    {
        queries[i].ans = std::min(queries[i].ans, segment_tree.query(level[queries[i].lca], level[node] + 1));
    }
    for (int child : tree[node])
    {
        dfs(tree, child, cost, segment_tree, level, node_queries, queries);
    }
}

long long solve(IO &sc)
{
    auto [tree, component, cost, parent, level] = get_component_tree(sc);
    std::vector<Query> queries = read_queries(sc);
    if (std::find(cost.begin(), cost.end(), 0) == cost.end())
    {
        return -static_cast<long long>(queries.size());
    }
    std::vector<std::vector<int>> node_queries(tree.size(), std::vector<int>());
    for (int i = 0; i < queries.size(); i++)
    {
        queries[i].cu = component[queries[i].u];
        queries[i].cv = component[queries[i].v];
        queries[i].lca = get_lca(parent, queries[i].cu, queries[i].cv, level);
        node_queries[queries[i].cu].push_back(i);
        node_queries[queries[i].cv].push_back(i);
    }
    std::vector<long long> segment_tree_data(level[queries[0].lca] + 1, LLONG_MAX);
    SegmentPoint<int, Min> segment_tree(segment_tree_data);
    dfs(tree, 0, cost, segment_tree, level, node_queries, queries);
    return std::accumulate(queries.begin(), queries.end(), 0LL, [](long long sum, const Query &q)
                           { return sum + q.ans; });
}

int main()
{
    int t;
    std::cin >> t;
    for (int case_num = 1; case_num <= t; case_num++)
    {
        IO sc(std::cin, std::cout);
        long long ans = solve(sc);
        std::cout << "Case #" << case_num << ": " << ans << std::endl;
    }
    return 0;
}


