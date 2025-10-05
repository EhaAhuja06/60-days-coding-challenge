//Leetcode problem 125 valid palindrome
#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        int lp = 0, rp = s.size() - 1;

        while (lp < rp) {
            while (lp < rp && !isalnum(s[lp])) lp++; 
            while (lp < rp && !isalnum(s[rp])) rp--;  

            if (tolower(s[lp]) != tolower(s[rp])) return false;

            lp++;
            rp--;
        }

        return true;
    }
};
