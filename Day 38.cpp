//leetcode problem 1716
class Solution {
public:
    int totalMoney(int n) {
        int total = 0, current = 1;
        for (int day = 1; day <= n; day++) {
            total += current;
            if (day % 7 == 0) current = (day / 7) + 1;
            else current++;
        }
        return total;
    }
};
