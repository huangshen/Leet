#include "gtest/gtest.h"
#include "AddTwoNumbers.h"

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void print_List(ListNode *l) {
    cout << l->val << " "; 
    while(l->next != NULL) {
        l = l->next;
        cout << l->val << " ";
    } 

    cout << endl;
    
    return;
} 
 
TEST(AddTwoNumbers, 1)
{
    ListNode *l1, *l2, *tmp;
    
    l1 = new ListNode(3);
    
    tmp = new ListNode(4);
    tmp->next = l1;
    l1 = tmp; 

    tmp = new ListNode(2);
    tmp->next = l1;
    l1 = tmp; 

    l2 = new ListNode(4);
    
    tmp = new ListNode(6);
    tmp->next = l2;
    l2 = tmp; 

    tmp = new ListNode(5);
    tmp->next = l2;
    l2 = tmp;
    
    print_List(l1);
    print_List(l2);
}
