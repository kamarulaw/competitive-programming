/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n = num.size();
        map<char,set<int>> m;
        int lgi = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (num[i] == num[i-1])
            {
                m[num[i]].emplace(i-1);
                m[num[i]].emplace(i);
            }
            else 
            {
                for (auto it : m)
                {
                    if (it.second.size() >= 3)
                    {
                        string num_ = ""; num_ += it.first; num_ += it.first; num_ += it.first;
                        lgi = max(lgi, stoi(num_));
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
                string num_ = ""; num_ += it.first; num_ += it.first; num_ += it.first;
                lgi = max(lgi, stoi(num_));
                m.erase(it.first);
            }
            else 
            {
                m.erase(it.first);
            }
        }

        if (lgi == INT_MIN)
        {
            return ""; 
        }    
        else if (lgi == 0)
        {
            return "000";
        }
        else 
        {
            return to_string(lgi);
        }
    }
};
