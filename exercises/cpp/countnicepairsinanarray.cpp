/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 64 of 84 */
class Solution {
public:
    int rev(int x)
    {
        vector<int> v;
        while (x > 0)
        {
            v.push_back(x % 10); x /= 10;
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i]*pow(10,v.size()-i-1);
        }
        return ans;
    }

    int countNicePairs(vector<int>& nums) 
    {
        int ans = 0;
        map<int,int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] = rev(nums[i]);
            cout << nums[i] << " " << m[nums[i]] << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (nums[i] + m[nums[j]] == nums[j] + m[nums[i]])
                {
                    ans++;
                    ans = ans % ((int)pow(10,9)+7);
                }
            }
        }
        return ans;
    }
};

/* SOLUTION 2 */
/* WRONG ANSWER ON CASE 81 of 84 */
class Solution {
public:
    int rev(int x)
    {
        vector<int> v;
        while (x > 0)
        {
            v.push_back(x % 10); x /= 10;
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i]*pow(10,v.size()-i-1);
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) 
    {
        int ans = 0;
        map<int,int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]-rev(nums[i])]++;
        }
        for (auto it : m)
        {
            int num = it.second*(it.second-1); num /= 2;
            ans += num;
        }
        return ans;
    }
};

/* SOLUTION 3 */
/* RUNTIME ERROR ON CASE 83 of 84 */
class Solution {
public:
    int rev(int x)
    {
        vector<int> v;
        while (x > 0)
        {
            v.push_back(x % 10); x /= 10;
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i]*pow(10,v.size()-i-1);
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) 
    {
        int ans = 0;
        map<int,int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]-rev(nums[i])]++;
        }
        for (auto it : m)
        {
            unsigned long long num;
            if (it.second % 2 == 0)
            {
                num = (it.second/2)*(it.second-1);
            }
            else 
            {
                num = (it.second)*((it.second-1)/2);
            }
            ans += num;
            ans %= 7+(int)pow(10,9);
        }
        return ans;
    }
};
