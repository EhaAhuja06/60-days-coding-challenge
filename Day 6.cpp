//gfg problem check if strings are anagram
#include<algorithm>
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size()!=s2.size())
        {
            return false;
        }
        else
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
};


//leetcode problem 28 find index of first occurrence in string
#include<algorithm>
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        return haystack.find(needle);
    }
};
