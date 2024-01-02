// #include<iostream>
// using namespace std;
// void  printSolution(int **solution , int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<solution[i][j]<<" ";
//         }
       

//     }
//      cout<<endl;

// }
// void mazeHelp(int maze[][20] , int n , int** solution , int x , int y){
//     if (x==n-1 && y==n-1)
//     {
//        solution[x][y] = 1;
//        printSolution(solution , n);
//        solution[x][y] = 0;
//          return;

//     }
//     if(x>=n || y>=n || x<0 || y<0 || maze[x][y]==0 || solution[x][y]==1){
//         return;
//     }
//     solution[x][y] = 1;
//     mazeHelp(maze , n , solution , x-1 , y);
//     mazeHelp(maze , n , solution , x+1 , y);
//     mazeHelp(maze , n , solution , x , y-1);
//     mazeHelp(maze , n , solution , x , y+1);
//     solution[x][y] = 0;
// }
// void ratInaMaze(int maze[][20] , int n){
//     int **solution = new int*[n];
//     for (int i = 0; i < n; i++)
//     {
//         solution[i] = new int[n];
//         // initialization of solution 2D arrays goes here.
//     }
//     mazeHelp(maze , n , solution , 0 , 0);

// }

// int main(){
//     int n;
//     cin>>n;
//     int maze[20][20];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>maze[i][j];
//         }

//     }
//     ratInaMaze(maze , n);
//     return 0;

// }

#include <iostream>
using namespace std;
void printSolution(int **solution, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << solution[i][j] << " ";
        }
    }
    cout << endl;
}
void mazeHelp(int maze[][20], int n, int **solution, int x, int y)
{

    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        printSolution(solution, n);
        solution[x][y]=0;
        return;
    }
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
    {
        return;
    }
    solution[x][y] = 1;
    mazeHelp(maze, n, solution, x - 1, y);
    mazeHelp(maze, n, solution, x + 1, y);
    mazeHelp(maze, n, solution, x, y - 1);
    mazeHelp(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}
void ratInAMaze(int maze[][20], int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solution[i] = new int[n];
    }
    // Initialization of solution 2D array with 0
    // for (int i = 0; i < n; i++)
    // {
    //     memset(solution[i], 0, n * sizeof(int));
    // }
    mazeHelp(maze, n, solution, 0, 0);
}

int main()
{
    int n;
    cin >> n;
    int maze[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }
    ratInAMaze(maze, n);
    return 0;
}

