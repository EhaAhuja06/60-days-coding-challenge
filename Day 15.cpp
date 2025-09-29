//Leetcode problem 53 Maximum subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int global=nums[0];
        if(nums.size()==1)
        return nums[0];
        for(int i=1;i<nums.size();i++)
        {
             curr=max(nums[i],nums[i]+curr);
             global=max(global, curr);
        }
        return global;
    }
};
