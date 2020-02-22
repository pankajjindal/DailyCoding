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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (not l1 and not l2) {
            return nullptr;
        }
        
        if (not l1) {
            return l2;
        }
        
        if (not l2) {
            return l1;
        }
        
        auto node = new ListNode{
            (l1->val + l2->val) % 10
        };
        
        auto carry = (l1->val + l2->val) / 10;
        
        node->next = addTwoNumbers(
            carry == 0 ? nullptr : new ListNode{carry},
            addTwoNumbers(
                l1->next,
                l2->next
            )
        );
        
        return node;
        
        
    }
};

