/*Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3=NULL,*l4=NULL;
        while (l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val){
                if(l3==NULL){
                    l3 = l1;
                    l4 = l3;
                }
                else{
                    l3->next = l1;
                    l3=l3->next;
                }
                
                l1=l1->next;
            }
            else {
                if(l3==NULL){
                    l3 = l2;
                    l4 = l3;
                }
                    else{
                        l3->next = l2;
                        l3=l3->next;
                    }
                l2=l2->next;
            }
        
            
        }
        
        while(l1!=NULL)
        { 
            if(l3==NULL){
                l3 = l1;
                l4 = l3;
            }
            else{
                l3->next = l1;
                l3=l3->next;
            }
                
            l1=l1->next;
            
        }
        
        while(l2!=NULL)
        { if(l3==NULL){
                l3 = l2;
                l4 = l3;
            }
            else{
                l3->next = l2;
                l3=l3->next;
            }
                
            l2=l2->next;
            
        }
        return l4;
        
    }
};