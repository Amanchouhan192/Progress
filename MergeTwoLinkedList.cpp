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
        ListNode* anchr  = new ListNode(-1);
        ListNode* brid = anchr;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                brid->next = l1;
                l1 = l1->next;
            }
            else
            {
                brid->next = l2;
                l2 = l2->next;
            }
            brid = brid->next;
        }
        brid->next =l1?l1:l2;
        
        return anchr->next;
        
    }
    
};
