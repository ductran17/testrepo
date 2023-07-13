#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int *start = &numbers[0];
    int *end = &numbers[numbers.size() - 1];
    vector<int> result;
    while (*start + *end != target)
    {
        if (*start + *end < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    result = {start - &numbers[0], end - &numbers[0]};
    return result;
}

int main()
{
    vector<int> V = {-1, 0};
    int target = -1;
    vector<int> result = twoSum(V, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}