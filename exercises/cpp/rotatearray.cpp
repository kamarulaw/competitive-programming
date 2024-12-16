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

/* SOLUTION 2 */
/* RUNTIME ERROR ON CASE 8 of 28 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() == 1)
        {
            return;
        }
        int n = nums.size();
        vector<int> temp;
        int start = n-1-k+1;
        int end = start+k-1;
        for (int ind = start; ind <= end; ind++)
        {
            temp.push_back(nums[ind]);
        }     
        for (int ind = 0; ind <= start-1; ind++)
        {
            temp.push_back(nums[ind]);
        }
        nums = temp;
        return; 
    }
};
