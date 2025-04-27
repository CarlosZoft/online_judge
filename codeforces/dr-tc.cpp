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

    int nTests = 0, i = 0, j = 0;

    cin >> nTests;

    rep(i, 0, nTests)
    {

        int strSize = 0, zeroCount = 0, oneCount = 0, finalQtd = 0;
        cin >> strSize;

        string s = "";
        cin >> s;

        for (char c : s)
        {
            (c - '0') ? oneCount++ : zeroCount++;
        }

        finalQtd += zeroCount * (oneCount + 1);
        finalQtd += oneCount * (oneCount - 1);

        cout << finalQtd << endl;
    }

    return 0;
}

// 0000 1000 0100 0010 0001
// 01010 11010 00010 01110 01000 01011
// 101 001 111 100
// 010 110 000 011

// For each '0' in the string, I have to increment oneCount and add it to FinalSum; otherwise, for each '1', I have to decrement oneCount and add it to FinalSum.