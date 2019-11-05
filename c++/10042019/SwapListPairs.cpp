#include <iostream>

using namespace std;

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
    struct ListNode{
      int val;
      ListNode *next;
    };
    ListNode(int x) :val(x),next(NULL){}
    ListNode* swapPairs(ListNode* head) {
	    if((head->next !=NULL) && (head->next->next !=NULL))
	    {
		    ListNode *temp;
		    temp = head->next;
		    head->next = head->next->next;
		    head->next->next = temp;
	    }
    }
};
