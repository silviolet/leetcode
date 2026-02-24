/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> seen;
        while (headA && headB) {
            if (headA == headB) return headA;
            if (seen.contains(headA)) return headA;
            if (seen.contains(headB)) return headB;
            seen.insert(headA);
            seen.insert(headB);
            headA = headA->next;
            headB = headB->next;
        }
        while (headA) {
            if (seen.contains(headA)) return headA;
            seen.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (seen.contains(headB)) return headB;
            seen.insert(headB);
            headB = headB->next;
        }
       return nullptr; 
    }
};