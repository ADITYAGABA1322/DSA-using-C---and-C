#include<iostream>
using namespace std;
class Edge{
    public:
    int source;
    int destination;
    int weight;


};
bool compare(Edge e1 , Edge e2){
    return e1.weight < e2.weight;
}

int findParent(int v , int *parent){
    if (parent[v] == v)
    {
        return v;
    }
    return findParent(parent[v] , parent);
    
}


void kruskals(Edge *input , int n , int E){
    // Sort the input array - ascending order based on weights
    sort(input , input + E , compare);
    Edge *output = new Edge[n-1];

    int *parent = new int[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }





    int count = 0;
    int i = 0;
    while (count != n-1)
    {
        Edge currentEdge = input[i];
        // Check if we can add the currentEdge in MST or not
        int sourceParent = findParent(currentEdge.source , parent);
        int destinationParent = findParent(currentEdge.destination , parent);
        if (sourceParent != destinationParent)
        {
            output[count] = currentEdge;
            count++;
            parent[sourceParent] = destinationParent;
        }
        i++;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (output[i].source < output[i].destination)
        {
            cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
        }else{
            cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }
        
    }

    
    
}

int main(){
    int n,E;
    cin>>n>>E;
    Edge *input = new Edge[E];
    for (int i = 0; i < E; i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source = s;
        input[i].destination = d;
        input[i].weight = w;
    }
    kruskals(input , n , E);
    
    return 0;
}


// INPUT
// 6 11
// 0 1 2
// 1 3 1
// 0 2 4
// 2 4 9
// 4 5 5 
// 3 5 7
// 4 3 11
// 2 5 10
// 0 3 3
// 2 1 8
// 2 3 6


//1.) Take input size= E
//2.) sort the input array based on weights
//3.) pick n-1 edges and put in MST
// where pick pick is perform cycle detection


// Steps to find out time complexity of Kruskals Algorithm
// 1. Sort the input array - O(ElogE)
// 2. Find out the parent of each vertex - O(V)
// 3. Check if we can add the currentEdge in MST or not - O(E)
// 4. Add the currentEdge in MST - O(E)
// 5. Repeat steps 3 and 4 until we get MST - O(E)
// 6. Print the MST - O(E)

// Time Complexity -O(ElogE + EV) aften union find algorithm Time complexity will be - O(ElogE + ElogV) = O(ElogE) = O(ElogV)

// Space Complexity - O(E + V)



// hOW TO IMPROVE CYLE DETECTION IN KRUSKALS ALGORITHM
// 1. Union Find Algorithm -> union by rank and path compression  // Time Complexity - O(ElogV)
// Time Complexity - O(ElogE + ElogV) = O(ElogE) = O(ElogV)
// 2. Disjoint Set
// 3. Path Compression
// 4. Union by Rank

