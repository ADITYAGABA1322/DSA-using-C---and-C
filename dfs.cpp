
// write a program to find dfs of a graph

// #include <iostream>
// #include <stack>

// using namespace std;

// int cost[10][10], i, j, k, n, qu[10], front, rear, v, vistit[10], visited[10];

// int main()
// {
//     int m;
//     cout << "enter no of vertices: ";
//     cin >> n;
//     cout << "ente no of edges: ";
//     cin >> m;
//     cout << "\nEDGES: \n";
//     // for (k = 1; k <= m; k++)
//     // {
//     //     cin >> i >> j;
//     //     cost[i][j] = 1;
//     // }
//     for (int i = 0; i < m; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         cost[a][b] = 1;
//     }

//     cout << " enter initial vertex: ";
//     cin >> v;
//     cout << "DFS ORDER: ";
//     cout << v << " ";
//     visited[v] = 1;
//     k = 1;
//     while (k < n)
//     {
//         for (j = n; j >= 1; j--)
//             if (cost[v][j] != 0 && visited[j] != 1 && vistit[j] != 1)
//             {
//                 vistit[j] = 1;
//                 qu[rear++] = j;
//             }
//         v = qu[front++];
//         cout << v << " ";
//         k++;
//         vistit[v] = 0;
//         visited[v] = 1;
//     }
// }

#include <iostream>
#include <stack>
using namespace std;
int cost[10][10], i, j, k, n, stk[10],  top, v, vistit[10], visited[10];
int main()
{
    int m;
    cout << "enter no of vertices: ";
    cin >> n;
    cout << "ente no of edges: ";
    cin >> m;
    cout << "\nEDGES: \n";
    for (k = 1; k <= m; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "enter initial vertex: ";
    cin >> v;
    cout << "Visitied vertices: \n";
    cout << v;
    visited[v] = 1;
    k = 1;
    while (k < n)
    {
        for (j = n;  j >= 1; j--)
            if (cost[v][j] != 0 && visited[j] != 1 && vistit[j] != 1)
            {
                vistit[j] = 1;
                stk[top] = j;
                top++;

            }
        v = stk[--top];
        cout << " " << v << " ";
        k++;
        vistit[v] = 0;
        visited[v] = 1;
    }
}
