/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 54 of 59 */
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        /*
        // if repeated number only comes up once
        int n = nums.size() - 1;
        int total = 0;
        for (int i = 0; i < n + 1; i++)
        {
            total += nums[i];
        }
        return total - ((n)*(n+1)/2);    
        */
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && nums[i] == nums[j])
                {
                    return nums[i];
                }
            }
        }
        return -1;
    }
};

/* SOLUTION 2 */ 
/* All tests passed */
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        /*
        // if repeated number only comes up once
        int n = nums.size() - 1;
        int total = 0;
        for (int i = 0; i < n + 1; i++)
        {
            total += nums[i];
        }
        return total - ((n)*(n+1)/2);    
        */
        int n = nums.size();
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++; 
            if (m[nums[i]] > 1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
