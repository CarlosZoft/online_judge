#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> aux;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    aux.push_back(i);
                    aux.push_back(j);
                }
            }
        }

        return aux;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    cout << "Indices encontrados: ";
    for (int idx : result)
    {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}