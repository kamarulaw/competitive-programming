/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 67 of 76 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0; 
        }
        map<long long, long long> m;
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        int longestconsecutive = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            m[(long long)nums[i]]++;
            min_ = min(min_, nums[i]);
            max_ = max(max_, nums[i]);
        }    
        vector<bool> visited(max_ - min_ + 1, false);
        for (int i = 0; i < n; i++)
        {
            if (m[nums[i]] >= 1)
            {
                visited[nums[i] - min_] = true;
            }
        }
        int counter = 0;
        for (int i = 0; i < visited.size(); i++)
        {
            if (i == 0)
            {
                if (visited[i] == true)
                {
                    counter = 1;
                }
                else 
                {
                    counter = 0;
                }
            }
            else if (i != 0 && visited[i] == true && visited[i-1] == true)
            {
                counter++;
            }
            else
            {
                counter = 1;
            }
            longestconsecutive = max(longestconsecutive, counter);
        }
        return longestconsecutive;
    }
};

/* SOLUTION 2 */
/* TIME LIMIT EXCEEDED ON CASE 71 of 76 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0; 
        }
        map<long long, long long> m;
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        int longestconsecutive = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            m[(long long)nums[i]]++;
            min_ = min(min_, nums[i]);
            max_ = max(max_, nums[i]);
        }    
        vector<bool> visited(max_ - min_ + 1, false);
        for (int i = 0; i < n; i++)
        {
            if (m[nums[i]] >= 1)
            {
                visited[nums[i] - min_] = true;
            }
        }
        int counter = 0;
        for (int i = 0; i < visited.size(); i++)
        {
            if (i == 0)
            {
                if (visited[i] == true)
                {
                    counter = 1;
                }
                else 
                {
                    counter = 0;
                }
            }
            else if (i != 0 && visited[i] == true && visited[i-1] == true)
            {
                counter++;
            }
            else
            {
                counter = 1;
            }
            longestconsecutive = max(longestconsecutive, counter);
            if (visited[i] == false && longestconsecutive > n - longestconsecutive)
            {
                break;
            }
        }
        return longestconsecutive;
    }
};

