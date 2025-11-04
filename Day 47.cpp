//leetcode problem 3217 delete nodes from linked list present in array
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        while (prev->next != nullptr) {
            if (s.count(prev->next->val)) {
                prev->next = prev->next->next;
            } else {
                prev = prev->next;
            }
        }

        return dummy.next;
    }
};
