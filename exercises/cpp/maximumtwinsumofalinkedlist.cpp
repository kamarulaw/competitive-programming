/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int pairSum(ListNode* head) 
    {
        int mts = INT_MIN;

        vector<int> l_;
        
        while (head != NULL)
        {
            l_.push_back(head->val);
            head = head->next;
        }

        int n = l_.size();

        for (int i = 0; i < n/2; i++)
        {
            mts = max(mts,l_[i] + l_[n-i-1]);
        }

        return mts;
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
