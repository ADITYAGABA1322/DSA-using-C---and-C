
// B. Sasha and the Drawing


// Even in kindergarten, Sasha liked a girl. Therefore, he wanted to give her a drawing and attract her attention.

// As a drawing, he decided to draw a square grid of size 𝑛×𝑛, in which some cells are colored. But coloring the cells is difficult, so he wants to color as few cells as possible. But at the same time, he wants at least 𝑘 diagonals to have at least one colored cell. Note that the square grid of size 𝑛×𝑛 has a total of 4𝑛−2 diagonals.

// Help little Sasha to make the girl fall in love with him and tell him the minimum number of cells he needs to color.

// Input
// Each test consists of multiple test cases. The first line contains a single integer 𝑡 (1≤𝑡≤1000) — the number of test cases. The description of the test cases follows.

// The only line of each test case contains two integers 𝑛 and 𝑘 (2≤𝑛≤108, 1≤𝑘≤4𝑛−2) — the size of the square grid and the minimum number of diagonals in which there should be at least one colored cell.

// Output
// For each test case, output a single integer — the minimum number of cells that need to be colored.

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k == 4*n-2) cout<< 2*n << endl;
        else if(k%2 == 1) cout<<(k+1)/2 << endl;
        else cout<<k/2<<endl;
    }
    
    return 0;
}