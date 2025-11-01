//Solved leetcode pervious weekly contest problem 1 remove zeros in decimal representation
class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string res=" ";
        for(char c:s)
            {
                if(c!='0')
                {
                    res+=c;
                }
            }
        return stoll(res);
    }
};
