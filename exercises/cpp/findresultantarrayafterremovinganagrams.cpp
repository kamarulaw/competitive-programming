/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<bool> removeAnagramsUtil(vector<bool> exists, vector<map<char,int>> vm)
    {
        vector<int> relevantinds;
        for (int i = 0; i < exists.size(); i++)
        {
            if (exists[i] == true)
            {
                relevantinds.push_back(i);
            }
        }
        int n = relevantinds.size();
        for (int i = 0; i < n-1; i++)
        {
            int counter = 0;
            map<char,int> m1 = vm[relevantinds[i]];
            map<char,int> m2 = vm[relevantinds[i+1]];
            for (auto it : m1)
            {
                if (it.second != m2[it.first])
                {
                    break;
                }
                else
                {
                    counter++;
                }
            }
            if (counter == m1.size() && m2.size() == m1.size())
            {
                exists[relevantinds[i+1]] = false;
                return exists;
            }
        }
        return exists;
    }

    vector<string> removeAnagrams(vector<string>& words) 
    {
        map<char,int> m;
        vector<map<char,int>> vm(words.size(), m);
        vector<bool> exists(words.size(), true);
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                vm[i][words[i][j]]++;
            }
        }
        while (exists != removeAnagramsUtil(exists,vm))
        {
            exists = removeAnagramsUtil(exists,vm);
        }
        vector<string> sol;
        for (int i = 0; i < exists.size(); i++)
        {
            if (exists[i] == true)
            {
                sol.push_back(words[i]);
            }
        }
        return sol;
    }
};
