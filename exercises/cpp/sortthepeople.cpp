/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(pair<string,int> pair1, pair<string,int> pair2)
    {
        return pair1.second >= pair2.second;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        /* 
        if (names[0].compare("Mary") == 0 && names[1].compare("John") == 0 && names[2].compare ("Emma") == 0)
        {
            return {"Mary","Emma","John"};
        }
        */
        vector<pair<string,int>> v;
        vector<string> sol(names.size(), "");
        for (int i = 0; i < names.size(); i++)
        {
            pair<string,int> p;
            p.first = names[i];
            p.second = heights[i];
            v.push_back(p);
        }    
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < names.size(); i++)
        {
            sol[i] = v[i].first; 
        }
        return sol;
    }
};
