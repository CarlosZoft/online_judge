#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, double> pii;
typedef vector<int> vi;

int main()
{
  int n = 0;
  int aux = 0;

  cin >> n;

  if (n % 2 || n == 2)
  {
    cout << "NO" << endl;
    return 0;
  }

  aux = 2;
  n -= 2;

  while (true)
  {
    if (!(n % 2) && !(aux % 2))
    {
      cout << "YES" << endl;
      return 0;
    }
    if ((n % 2) || (aux % 2))
    {
      cout << "NO" << endl;
      return 0;
    }
    
    aux += 2;
    n -= 2;
  }

  cout << "NO" << endl;
}
