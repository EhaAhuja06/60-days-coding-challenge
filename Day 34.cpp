//Leetcode problem 292 Nim game
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
        {
            return false;
        }
        return true;
    }
};

//Leetcode problem 1025 Divisor Game
class Solution {
public:
    bool divisorGame(int n) {
        if(n%2==0)
        {
            return true;
        }
        return false;
    }
};
