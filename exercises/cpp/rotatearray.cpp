/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 28 of 38 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n)
        {
            return;
        }
        vector<int> resultprefix(nums.end()-k,nums.end());
        vector<int> resultsuffix(nums.begin(),nums.begin()+n-k);
        vector<int> result;
        int index = 0; 
        while (index < resultprefix.size())
        {
            nums[index] = resultprefix[index];
            index++;
        }
        index = 0;
        while (index < resultsuffix.size())
        {
            nums[index + resultprefix.size()] = resultsuffix[index];
            index++;
        }
    }
};
