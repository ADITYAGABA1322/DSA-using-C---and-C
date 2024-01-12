#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int alice, bob;
    cin >> alice >> bob;
    if (alice > bob)
    {
      cout << "Alice" << endl;
    }
    else
    {
      cout << "Bob" << endl;
    }
    return 0;
  }