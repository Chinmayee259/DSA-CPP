#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int maxSubarraysum(vector<int>& nums)
{
    int currSum = 0, maxSum = INT_MIN;
    for(int val : nums)
    {
        currSum += val;
        maxSum = max(currSum , maxSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int>vec = {1,2,3,4,5};
    cout << maxSubarraysum(vec);
    return 0;
}