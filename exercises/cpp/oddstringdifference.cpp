/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string oddString(vector<string>& words) 
    {
        map<vector<int>,vector<string>> m;
        int n = words[0].length();  
        for (int i = 0; i < words.size(); i++)
        {
            vector<int> diffarr(n-1,0);
            for (int j = 0; j < n-1; j++)
            {
                diffarr[j] = words[i][j+1] - words[i][j];
            }
            m[diffarr].push_back(words[i]);
        }
        for (auto it: m)
        {
            if (it.second.size() == 1)
            {
                return it.second[0];
            }
        }
        return ""; // never reached
    }
};
