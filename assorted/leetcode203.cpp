/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* top = new ListNode(-1, head);
        ListNode* cur = top;
       while (cur) {
        while (cur->next && (cur->next->val == val)) cur->next = cur->next->next;
        cur = cur->next;
       }
       return top->next;
    }
};