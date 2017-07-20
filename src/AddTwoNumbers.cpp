
#include "AddTwoNumbers.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode *head=NULL, *tail, *tmp;
    int val1, val2, val_sum, flag;
    
    flag = 0;
    while(l1 != NULL || l2 != NULL) {
        tmp = new ListNode(0);
        if(head == NULL) {
        	head = tmp;
        	tail = tmp;
        } else {
            tail->next = tmp;
            tail = tmp;
        }

        if(l1 != NULL) {
            val1 = l1->val;
            l1 = l1->next;
        }
        else
            val1 = 0;
            
        if(l2 != NULL) {
            val2 = l2->val;
            l2 = l2->next;
        }
        else
            val2 = 0;
            
        val_sum = val1 + val2 + flag;
        
        if(val_sum > 9) {
            tmp->val = val_sum - 10;
            flag = 1;
        } else {
            tmp->val = val_sum;
            flag = 0;
        }

    }
    
    if(flag == 1) {
    	tmp = new ListNode(0);
    	tail->next = tmp;
    	tmp->val = 1;
    }

    return head;
}
