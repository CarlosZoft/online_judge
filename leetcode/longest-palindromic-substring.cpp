#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string s, int start, int end)
{
    for (int i = start, j = end; j > i; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }

    return true;
}
bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int maxLongestNumber = 0;
        pair<int, int> finalSubs = {0, 1};
        int len = s.size();

        vector<pair<int, int>> allSubs;

        for (int i = 0; i < len; i++)
        {
            for (int j = len - 1; j > i; j--)
            {
                if (s[j] == s[i])
                {
                    allSubs.push_back({i, j + 1 - i});
                }
            }
        }

        for (auto [start, end] : allSubs)
        {
            if (isPalindrome(s, start, end))
            {
                int diff = end - start;
                if (diff > maxLongestNumber)
                {
                    maxLongestNumber = diff;

                    finalSubs.first = start;
                    finalSubs.second = end;
                }
            }
        }

        return s.substr(finalSubs.first, finalSubs.second);
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
