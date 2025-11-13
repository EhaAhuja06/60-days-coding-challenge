//Leetcode problem 520 Detect Capitals
class Solution {
public:
int upper_count=0;
    bool detectCapitalUse(string word) {
     for(char c: word)
     {
        if(isupper(c))
        {
            upper_count++;
        }
     }
     if(upper_count==word.size() || upper_count==0 || upper_count==1&&isupper(word[0]))
     {
        return true;
     }
     return false;
    }
};
