#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int strLen = s.size();
        int maxCount = 0;

        for (int i = 0; i < strLen; i++)
        {
            int currentCount = 1;
            // Initialize the ASCII array to 0
            int ASCII[128] = {0};
            ASCII[s[i]] = 1;

            for (int j = i + 1; j < strLen; j++)
            {
                if(ASCII[s[j]]) break;
                
                currentCount += 1;
                ASCII[s[j]] = 1;
            }

            if (currentCount > maxCount)
                maxCount = currentCount;
        }

        return maxCount;
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
        cout << solution.lengthOfLongestSubstring(input) << endl;
    }

    return 0;
}
