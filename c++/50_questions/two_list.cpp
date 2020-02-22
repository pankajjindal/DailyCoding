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
        ListNode * out = new ListNode(0);
        ListNode * resi = out;
        ListNode * prev;
        int res = 0;
         while(l1 != NULL || l2 !=NULL){
             res = l1->val + l2->val + res;
             if(res >= 10){
                 //out->next = new ListNode(0);
                 out->val = res%10;
                 res = res/10;
             }
              else{
                  //out->next = new ListNode(0);
                  out->val = res;
                  res =0;
              }
             l1=l1->next;
             l2=l2->next;
             prev = out;
             out = out->next;
             out = new ListNode(0);
             out->next= NULL;
             
             
         }
        prev = NULL;
        return resi;    
    }
};
