/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        int count = 0;
        ListNode* chead = head;
        while (chead != NULL)
        {
            count++;
            chead = chead->next;
        }
        int k = 0;
        if (count % 2 == 1)
        {
            while (k != count/2)
            {
                k++;
                head = head->next;
            }
        } 
        else 
        {
            while (k != (count/2))
            {
                k++;
                head = head->next;
            }
        }   
        return head;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
