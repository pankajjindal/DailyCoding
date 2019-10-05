#include <iostream>

using namespace std;

class List{
    public:
    List() {}

    typedef struct ListNod{
    	T val;
    	ListNode *next;
    }ListNode;

    ListNode * ArrangeOddEven();

    void copyToOtherList(ListNode *main ,ListNode * temp);

    private:
        ListNode *_head;
    };

    List::copyToOtherList( ListNode * main,ListNode * temp)
    {
    	
    }

    List::ArrangeOddEven(){
    	ListNode *main = _head;
    	ListNode * oddListHead, * oddListTail;
    	ListNode * evenListHead, * evenListTail;

    	if( main == NULL)
    		return NULL;

    	while(main != NULL){
    		if( (val % 2)!=0)
    		{// this is the case of even list
    			if(firsTimeEven)
    			{
    				oddListHead = head;
    				head = head->next;
    				oddListHead->next = NULL;
    				oddListTail = oddListHead;
    			}
    			else
    			    copyToOtherList(head,oddListTail);
    		}
    		else
    		{// this is the case of the odd list
    			if(firsTimeOdd)
    			{
    				evenListHead = head;
    				head = head->next;
    				evenListHead->next = NULL;
    				evenListTail = evenListHead;
    				continue;
    				
    			}
    			else
    			    copyToOtherList(head,oddListTail);


    		}

    	}




    }
