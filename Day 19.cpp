//Leetcode problem 35 search insert position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lp=0;
        int rp=nums.size()-1;
        while(lp<=rp)
        {
            int mid=lp+(rp-lp)/2;
            if(nums[mid]==target)
            return mid;
            else if(target<nums[mid])
            rp=mid-1;
            else 
            lp=mid+1;
        }
        return lp;
    }
};

//Leetcode problem 268 Missing number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int array_sum=0;
        int n=nums.size();
        int actual_sum=n*(n+1)/2;
        for(int i=0; i<n; i++)
        {
             array_sum += nums[i];
        }
        int diff= (actual_sum - array_sum);
        return diff;
    }
};
