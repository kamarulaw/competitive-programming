/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool isprime(int n)
    {
        if (n == 2)
        {
            return true;
        }
        if (n < 2 || n % 2 == 0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(n, .5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int arrayGCD(vector<int> arr)
    {
        int n = arr.size(); map<int,int> m;
        vector<map<int,int>> pfs(n,m);
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            for(int j = 2; j < num; j++)
            {
                while (num % j == 0 && isprime(j))
                {
                    pfs[i][j]++;
                    num /= j;
                }
            }
        }
        set<int> keys;
        for (int i = 0; i < n; i++)
        {
            for (auto it : pfs[i])
            {
                if (it.second >= 1)
                {
                    keys.emplace(it.first);
                }
            }
        }
        int ans = 1;
        vector<int> vkeys(keys.begin(), keys.end());
        vector<int> vkmins(vkeys.size(), 0);
        for (int i = 0; i < vkeys.; i++)
        {
            vkmins[i] = min(pfs[i][vkeys[i]], vkmins[i]);
        }
        for (int i = 0; i < vkmins.size(); i++)
        {
            ans *= pow(vkeys[i], vkmins[i]);
        }
        return ans;
    }

    int subarrayGCD(vector<int>& nums, int k) 
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> subarr(nums.begin()+i, nums.begin()+i+j);
                if (arrayGCD(subarr) == k)
                {
                    ans++;
                }
            }
        }   
        return ans; 
    }
};
