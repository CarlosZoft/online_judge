#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countSubarrays(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            double x = nums[i - 1], y = nums[i], z = nums[i + 1];
            if ((x + z) == (y / 2))
            {
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution solution;

    // Exemplo de teste
    vector<int> nums = {1, 2, 1, 4, 1};

    int result = solution.countSubarrays(nums);
    cout << "Resultado: " << result << endl;

    return 0;
}
