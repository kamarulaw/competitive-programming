/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 344 of 805 */
class Solution {
public:
    int maxDifference(string s) 
    {
        map<char,int> m;
        int sol = INT_MIN;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }    
        for (auto it1 : m)
        {
            for (auto it2 : m)
            {
                if (it1.first!=it2.first&&it1.second%2!=it2.second%2)
                {
                    sol = max(abs(it1.second-it2.second),sol);
                }
            }
        }
        return sol;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    int maxDifference(string s) 
    {
        map<char,int> m;
        vector<int> sols;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }    
        for (auto it1 : m)
        {
            for (auto it2 : m)
            {
                if (it1.first!=it2.first&&it1.second%2!=it2.second%2)
                {
                    if (it1.second%2==1)
                    {
                        sols.push_back(it1.second-it2.second);
                    }
                    else
                    {
                        sols.push_back(it2.second-it1.second);
                    }
                }
            }
        }
        sort(sols.begin(),sols.end());
        reverse(sols.begin(),sols.end());
        return sols[0];
    }
};
