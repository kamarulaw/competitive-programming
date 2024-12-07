/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int similarPairs(vector<string>& words) 
    {
        int n = words.size();
        map<char,int> m;
        vector<map<char,int>> vm(n,m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                vm[i][words[i][j]]++;
            }
        } 
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    bool flag = true;
                    map<char,int> m1 = vm[i];
                    map<char,int> m2 = vm[j]; 
                    for (auto it : m1)
                    {
                        if (it.second >= 1 && m2[it.first] >= 1)
                        {
                            continue;
                        }
                        else 
                        {
                            flag = false; 
                            break;
                        }
                    }
                    for (auto it : m2)
                    {
                        if (it.second >= 1 && m1[it.first] >= 1)
                        {
                            continue;
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag == true)
                    {
                        sol++;
                    }
                }
            }
        } 
        return sol / 2;  
    }
};
