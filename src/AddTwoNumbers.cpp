
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
    ListNode *sum, *tmp;
    int val1, val2, val_sum, flag;
    
    flag = 0;
    while(l1 != NULL || l2 != NULL) {
        tmp = new ListNode(0);
        if(l1 != NULL)
            val1 = l1->val;
        else
            val1 = 0;
            
        if(l2 != NULL)
            val2 = l2->val;
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
    
    return sum;
}