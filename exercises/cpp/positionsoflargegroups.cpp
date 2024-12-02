/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 152 of 202 */
class Solution {
public:
    static bool comp(vector<int> v1, vector<int> v2)
    {
        return v1[0] <= v2[0];
    }

    vector<vector<int>> largeGroupPositions(string s) 
    {
        int n = s.length();
        map<char,set<int>> m;
        vector<vector<int>> sol;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                m[s[i-1]].emplace(i-1);
                m[s[i]].emplace(i);
            }
        }
        for (auto it : m)
        {
            if (it.second.size() >= 3)
            {
                vector<int> vs(it.second.begin(), it.second.end()); sort(vs.begin(), vs.end());
                vs = {vs[0], vs[vs.size()-1]};
                sol.push_back(vs);
            }
        }
        sort(sol.begin(), sol.end());
        return sol;    
    }
};

/* SOLUTION 2 */
/* All tests passed */ 
class Solution {
public:
    static bool comp(vector<int> v1, vector<int> v2)
    {
        return v1[0] <= v2[0];
    }

    vector<vector<int>> largeGroupPositions(string s) 
    {
        int n = s.length();
        map<char,set<int>> m;
        vector<vector<int>> sol;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                m[s[i-1]].emplace(i-1);
                m[s[i]].emplace(i);
            }
            else
            {
                for (auto it : m)
                {
                    if (it.second.size() >= 3)
                    {
                        vector<int> vs(it.second.begin(), it.second.end()); sort(vs.begin(), vs.end());
                        vs = {vs[0], vs[vs.size()-1]};
                        sol.push_back(vs);
                        m.erase(it.first);
                    }
                    else 
                    {
                        m.erase(it.first);
                    }
                }
            }
        }
        for (auto it : m)
        {
            if (it.second.size() >= 3)
            {
                vector<int> vs(it.second.begin(), it.second.end()); sort(vs.begin(), vs.end());
                vs = {vs[0], vs[vs.size()-1]};
                sol.push_back(vs);
                m.erase(it.first);
            }
        }
        sort(sol.begin(), sol.end(), comp);
        return sol;    
    }
};
