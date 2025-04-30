#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (auto num : nums)
        {
            int i = 0;

            while (num)
            {
                num = num / 10;
                i++;
            }
            if (i < 2)
                continue;
            if (!(i % 2))
                ans++;
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {12, 345, 2, 6, 7896};

    int result = solution.findNumbers(nums);
    cout << "Resultado: " << result << endl;

    return 0;
}