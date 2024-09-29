/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 42 of 51 */ 
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int ops = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end()); 

        vector<bool> visited;

        for (int i = 0; i < n; i++)
        {
            visited.push_back(false);
        }

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (nums[i] + nums[j] == k && visited[j] == false && visited[i] == false)
                    {
                        cout << visited[i] << " | " << visited[j] << endl;
                        ops++;
                        visited[i] = true;
                        visited[j] = true;

                        cout << i << " | " << j;
                        cout << " <=> " << visited[i] << " | " << visited[j] << endl;

                    }
                }
            }
        }
        return ops;
    }
};

/* SOLUTION 2 */ 
/* All tests passed */
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int ops = 0; 

        int n = nums.size();

        map<int,int> m;
        
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != k-nums[i] && (m[nums[i]] > 0 && m[k-nums[i]] > 0) || (nums[i]==k-nums[i] && (m[nums[i]]>1)))
            {
                ops++;
                m[nums[i]]--; 
                m[k-nums[i]]--; 
            }
        }
        return ops;
    }
};
