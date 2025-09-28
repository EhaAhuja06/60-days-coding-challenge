//Leetcode problem container with most water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0, rp=height.size()-1;
        while(lp<rp)
        {
            int width= rp-lp;
            int ht=min(height[lp],height[rp]);
            int CurrWater=width*ht;
            maxWater=max(CurrWater, maxWater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};
