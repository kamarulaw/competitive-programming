/* SOLUTION 1 */
/* SORT LIST OF LENGTH N */
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(), nums.end()); 
      return nums[nums.size()-k];
    }
};

/* SOLUTION 2 */
/* PRIORITY QUEUE SOLUTION (maintain sorted list of length len while constructing a list of length n) */
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n = nums.size();

        priority_queue<int> pq;
        
        for (int i = 0; i < n; i++)
        {
            pq.push(nums[i]);
        }

        for (int i = 0; i < k-1; i++)
        {
            pq.pop();
        }
        
        return pq.top();
    }
};
