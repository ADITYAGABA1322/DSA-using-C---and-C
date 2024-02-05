// 1.) Prime Array (Hackerearth)

// Problem
//     You are given an array having integers.Find the number of triplets such that

//         .is Prime number.Input format

//             The first line of input contains an integer denoting the number of test cases.The description of each test case is as follows:
// The first line of each test case contains an integers.The second line of each test case contains integers.Output format

//     For each test case,
//     print the number of triplets that satisfies the given conditions in a separate line.

// Sample Input : 
// 2
// 4
// 4 5 6 2
// 4
// 1 1 4 5

// Sample Output :
// 0
// 1


#include <iostream>


using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (isPrime(arr[i] + arr[j] + arr[k]))
                        count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

