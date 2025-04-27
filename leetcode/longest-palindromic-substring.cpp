#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string s, int size)
{
    for (int i = 0, j = size - 1; j > i; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }

    return true;
}
bool comp(pair<int, string> a, pair<int, string> b)
{
    return a.first > b.first;
}

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int maxLongestNumber = 0;
        string maxLongestStr = s.substr(0, 1);
        int len = s.size();

        vector<pair<int, string>> allSubs;

        for (int i = 0; i < len; i++)
        {
            for (int j = len - 1; j > i; j--)
            {
                if (s[j] == s[i])
                {
                    string cand = s.substr(i, j + 1 - i);
                    int sizeS = cand.size();
                    allSubs.push_back({sizeS, cand});
                }
            }
        }

        sort(allSubs.begin(), allSubs.end(), comp);

        for (auto [sizeS, subStr] : allSubs)
        {
            if (isPalindrome(subStr, sizeS))
                return subStr;
        }

        return maxLongestStr;
    }
};

int main()
{
    Solution solution;
    string input;

    while (getline(cin, input))
    {
        if (input.empty())
            continue;

        cout << solution.longestPalindrome(input) << endl;
    }

    return 0;
}
