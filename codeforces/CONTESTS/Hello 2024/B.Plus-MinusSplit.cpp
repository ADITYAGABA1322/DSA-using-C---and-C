#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += s[i] == '+' ? 1 : -1;
    }
    cout << abs(sum) << endl;
  }
}