#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    set<vector<int>> setResult;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                setResult.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
        }
    }
    for (auto triplets : setResult)
    {

        result.push_back(triplets);
    }
    return result;
}

int main()
{
    vector<int> V = {1, 2, 3, -3, 4, 5, 6, -9};
    vector<vector<int>> result = threeSum(V);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
    }
}