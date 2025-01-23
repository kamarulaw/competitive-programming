/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 57 of 65 */ 
class Solution {
public:
    long long countBadPairs(vector<int>& nums) 
    {
        long long sol = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (j-i != nums[j]-nums[i])
                {
                    sol++;
                }
            }
        }    
        return sol;
    }
};

/* SOLUTION 2 */
/* WRONG ANSWER ON CASE 64 of 65 */
class Solution {
public:
    long long countBadPairs(vector<int>& nums) 
    {
        // total number of pairs = bad pairs + not bad pairs
        unsigned long long int n = nums.size();
        map<int,int> m;
        unsigned long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            m[i-nums[i]]++;
        }
        int notbadpairs = 0;
        unsigned long long int totalpairs = (unsigned long long int)((n)*(n-1))/2;
        for (auto it : m)
        {
            unsigned long long num = (unsigned long long)(it.second)*(unsigned long long)(it.second-1)/2;
            notbadpairs += num;
        }
        ans = totalpairs - notbadpairs;
        return ans;

    }
};
