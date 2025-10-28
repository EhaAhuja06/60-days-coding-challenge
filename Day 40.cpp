//Leetcode problem 3354 Make array elements equal to zero
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        int ans = 0;

        for (int x : nums) {
            total -= x;

            if (x == 0) {
                if (leftSum == total) {
                    ans += 2;
                } else if (abs(leftSum - total) == 1) {
                    ans += 1;
                }
            }
            leftSum += x;
        }

        return ans;
    }
};
