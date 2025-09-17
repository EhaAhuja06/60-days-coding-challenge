//leetcode problem no. 13 ROMAN TO INT
class Solution {
public:
    int romanToInt(string s) 
    {
        int total=0;
        unordered_map<char,int>roman_map=
        {
            {'I', 1}, {'V', 5}, {'X', 10},{'L', 50}, {'C', 100}, {'D', 500}, {'M',1000}
        };
        for(int i=0;i<s.length();i++)
        {
            if(i<s.length()-1&&roman_map[s[i]]<roman_map[s[i+1]])
            {
                total=total-roman_map[s[i]];
            }
            else
            {
                total=total+roman_map[s[i]];
            }
        }
        return total;
    }
};
