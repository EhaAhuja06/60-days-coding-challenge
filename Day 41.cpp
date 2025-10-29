//Leetcode problem 2011 final value of variable after operations
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (string op : operations) {
            if (op[1] == '+')
                X++;
            else
                X--;
        }
        return X;
    }
};
