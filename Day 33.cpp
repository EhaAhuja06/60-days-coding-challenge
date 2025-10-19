//Leetcode problem 234 Palindrome Linked List
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        ListNode* temp = head;
        while (temp != nullptr) {
            vals.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0, j = vals.size() - 1;
        while (i < j) {
            if (vals[i] != vals[j])
                return false;
            i++;
            j--;
        }
        
        return true;
    }
};
