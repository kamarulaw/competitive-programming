/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isPrefixAndSuffix(string a, string b)
    {
        if (a.length() > b.length())
        {
            return false;
        }
        for (int i = 0; i < a.length(); i++)
        {
            if (b[i] != a[i])
            {
                return false;
            }
        }
        int ind = 0;
        for (int i = b.length() - a.length(); i < b.length(); i++)
        {
            if (b[i] != a[ind])
            {
                return false;
            }
            ind++;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) 
    {
        int ans = 0;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (isPrefixAndSuffix(words[i],words[j]))
                {
                    ans++;
                }
            }
        }
        return ans;   
    }
};
