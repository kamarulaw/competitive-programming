/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 17 of 19 */
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) 
    {
        int numequivalent = 0;
        for (int i = 0; i < dominoes.size(); i++)
        {
            vector<int> idom = dominoes[i];
            for (int j = 0; j < dominoes.size(); j++)
            {
                if (i < j)
                {
                    vector<int> jdom = dominoes[j];
                    if ((idom[0] == jdom[0] && idom[1] == jdom[1]) || 
                        (idom[0] == jdom[1] && idom[1] == jdom[0]))
                    {
                        numequivalent++;
                    }
                }
            }
        }
        return numequivalent;    
    }
};

/* SOLUTION 2 */
/* psf */ 
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) 
    {
        int numequivalent = 0;
        map<string, vector<string>> map_;
        map<string, int> domcount;
        for (int i = 0; i < dominoes.size(); i++)
        {
            vector<int> idom = dominoes[i];
            string key = domtostring(idom);
            domcount[key]++;
            if (map_[key].size() == 0)
            {
                map_[key].push_back(key);
                reverse(idom.begin(), idom.end());
                map_[key].push_back(domtostring(idom)); 
            }
        }
        for (auto it: map_)
        {
            int equiv = 0;
            vector<string> vv = it.second;
            for (auto v : vv)
            {
                if (map_[v].size() > 0)
                {
                    equiv++;
                }
                equiv *= domcount[it.first];
            }
            numequivalent += equiv;
        }
        return numequivalent/2;    
    }

    string domtostring(vector<int> dom)
    {
        string result = "";
        result += to_string(dom[0]); result += " "; result += to_string(dom[1]); 
        return result;
    }
};
