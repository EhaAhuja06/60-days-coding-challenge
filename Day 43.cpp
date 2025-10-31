//Leetcode problem 3289 the two sneaky numbers of digitville
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    result.push_back(nums[i]);
                }
            }
        }
        return result;
    }
};
