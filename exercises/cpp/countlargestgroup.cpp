/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int countLargestGroup(int n) 
    {
        map<int,vector<int>> m; 
        int largestgroup = INT_MIN;
        int sumswithlargestgroup = 0;
        for (int i = 1; i <= n; i++)
        {
            int sum = 0; 
            int num = i; 
            while (num > 0)
            {
                sum += (num % 10); 
                num /= 10; 
            }
            m[sum].push_back(1);
            largestgroup = max(largestgroup, (int)m[sum].size());
        }
        
    
        for (auto it: m)
        {
            if (it.second.size() == largestgroup)
            {
                sumswithlargestgroup++; 
            }
        }
        return sumswithlargestgroup; 
    }
};
