#include <iostream>
using namespace std;

const int INF = 1000000005;
const int MAXN = 200005;

int t;
int n;
int a[MAXN];

int main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> t;
  while (t--)
  {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int s = INF, t = INF;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (s > t)
      {
        swap(s, t);
      }
      if (a[i] <= s)
      {
        s = a[i];
      }
      else if (a[i] <= t)
      {
        t = a[i];
      }
      else
      {
        s = a[i];
        ans++;
      }
    }
    cout << ans << '\n';
  }
}