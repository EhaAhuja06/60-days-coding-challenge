//Leetcode problem 9
class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        long rev_num=0;
        int original=x;
        if(x<0)
        return false;
       
        while(x!=0)
        {
            int digit =x%10;
            rev_num= rev_num*10+digit;
            x=x/10;
        }
        return original==rev_num;
        
    }
};
