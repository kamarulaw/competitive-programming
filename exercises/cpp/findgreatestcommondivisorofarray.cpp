/* SOLUTION 1 */
/* All tests passed */
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
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int findGCD(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[nums.size()-1];
        if (a == 1 || b ==1)
        {
            return 1;
        }
        vector<int> pfa;
        vector<int> pfb; 
        for (int i = 2; i <= a; i++)
        {
            while (a % i == 0 && isprime(i))
            {
                pfa.push_back(i);
                a /= i;
            }
        }    
        for (int i = 2; i <= b; i++)
        {
            while (b % i == 0 && isprime(i))
            {
                pfb.push_back(i);
                b /= i;
            }
        }
        map<int,int> am; 
        map<int,int> bm;
        for (int i = 0; i < pfa.size(); i++)
        {
            am[pfa[i]]++; 
        }
        for (int i = 0; i < pfb.size(); i++)
        {
            bm[pfb[i]]++;
        }
        int ans = 1;
        set<int> keys;
        for (auto it : am)
        {
            if (it.second >= 1)
            {
                keys.emplace(it.first);
            }
        }
        for (auto it : bm)
        {
            if (it.second >= 1)
            {
                keys.emplace(it.first);
            }
        }
        vector<int> vkeys(keys.begin(), keys.end());
        for (int i = 0; i < vkeys.size(); i++)
        {
            ans *= pow(vkeys[i],min(am[vkeys[i]],bm[vkeys[i]]));
        }
        return ans;
    }
};
