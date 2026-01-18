#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, double> pii;
typedef vector<int> vi;

int main() {
  int t, n, i, y;

  cin >> t;

  rep(i, 0, t) {
    cin >> n;

    int x = 2, count = 0;
    if (n == 1) {
      cout << 1;
    } else {
      while (count < n) {
        int root = sqrt(x);
        if (root * root == x) {
          cout << x << " ";
          count++;
        }
        x++;
      }
    }
    cout << endl;
  }
  return 0;
}
