#include<iostream>
using namespace std;

#define N 9

bool findEmptyLocation(int grid[N][N] , int &row , int &col){
    for(int i = 0 ; i<N ; i++){
        for(int j = 0 ; j<N ; j++){
            if(grid[i][j] == 0){
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
    

}

bool isSafeInRow(int grid[N][N] , int row , int num){
    for(int i = 0 ; i<N ; i++){
        if(grid[row][i] == num){
            return false;
        }
    }
    return true;

}
bool isSafeInColoumn(int grid[N][N] , int col , int num){
    for(int i = 0 ; i<N ; i++){
        if(grid[i][col] == num){
            return false;
        }
    }
    return true;
}

bool isSafeInGrid(int grid[N][N] , int row , int col , int num){
    int rowFactor = row - row%3;
    int colFactor = col - col%3;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(grid[i+rowFactor][j+colFactor] == num){
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int grid[N][N] , int row , int col , int num){
    if(isSafeInRow(grid , row , num) && isSafeInColoumn(grid , col , num) && isSafeInGrid(grid , row , col , num)){
        return true;
    }
    return false;
    
    // for(int i = 0 ; i<N ; i++){
    //     if(grid[row][i] == num){
    //         return false;
    //     }
    // }
    // for(int i = 0 ; i<N ; i++){
    //     if(grid[i][col] == num){
    //         return false;
    //     }
    // }
    // int startRow = row - row%3;
    // int startCol = col - col%3;
    // for(int i = 0 ; i<3 ; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         if(grid[i+startRow][j+startCol] == num){
    //             return false;
    //         }
    //     }
    // }
    // return true;
}

bool solveSudoku(int grid[N][N]){
   int row , col;
   if(!findEmptyLocation(grid , row , col)){
      return true;
   }    
    for(int i=1 ; i<=N ; i++){
        if(isSafe(grid , row , col , i)){
            grid[row][col] = i;
            if(solveSudoku(grid)){
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

int main(){
    int grid[N][N];
    for (int i = 0; i < N; i++)
    {
       string s;
       cin>>s;
       for (int j = 0; j < s.length(); j++)
       {
         grid[i][j] =  s[j] - '0';
       }
       
    }
    // cout<<endl;
    solveSudoku(grid);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}



// Input 
// 023456789
// 406789123
// 780123456
// 234067891
// 567801234
// 891230567
// 345678012
// 678912305
// 912345670


// output 
// 123456789
// 456789123
// 789123456
// 234567891
// 567891234
// 891234567
// 345678912
// 678912345
// 912345678


