/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 34 of 98 */
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int answer = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                vector<int> subarr(nums.begin()+i, nums.begin()+j+1);
                if (subarr.size() > 0)
                {
                    unsigned long long int product = 1;
                    for (int l = 0; l < subarr.size(); l++)
                    {
                        product *= subarr[l];
                    }

                    if (product < k)
                    {
                        answer++;
                    }
                }
            }
        }
        return answer; 
    }
};
