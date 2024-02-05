// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int secretNum = 8;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outofguesses = false;
    while (secretNum != guess && !outofguesses)
    {
        if (guesscount < guesslimit)
        {
            cout << "Enter your guess";
            cin >> guess;
            guesscount++;
        }
        else
        {
            outofguesses = true;
        }
    }
    if (outofguesses)
    {
        cout << "You lost";
    }
    else
    {
        cout << "You won";
    }

    return 0;
}