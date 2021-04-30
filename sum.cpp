#include <iostream>
#include <vector>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int flag = 0;
    for (int i = 0; i <= nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                flag = 1;
                break;
            }
            if (ans.size() == 2)
            {
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> x = {3, 3, 3, 3};
    int target = 6;
    vector<int> output = twoSum(x, target);
    cout << output.size() << endl;
    for (auto k : output)
    {
        cout << k << endl;
    }
}