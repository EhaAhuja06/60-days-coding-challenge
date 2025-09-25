//Leetcode problem 50 pow(x,n)
class Solution {
public:
    double myPow(double x, int n) 
    {
        long bit_n = n;
        double ans = 1;

        if (n == 0) return 1;
        if (x == 1) return 1;

        if (n < 0) {
            x = 1 / x;
            bit_n *= -1;
        }

        while (bit_n > 0)
        {
            if (bit_n % 2 == 1)
                ans *= x;
            
            x *= x;
            bit_n /= 2;
        }

        return ans;
    }
};
