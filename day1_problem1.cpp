#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    { // Approach 1
        // int cnt = 0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<i;j++){
        //         if(nums[j] == nums[i]){
        //             cnt+=1;
        //         }
        //     }
        // }
        // Approach 2
        int ans = 0;
        int freq[101] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            ans += freq[nums[i]];
            freq[nums[i]]++;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int ans = sol.numIdenticalPairs(nums);
    printf("%d", ans);
    return 0;
}