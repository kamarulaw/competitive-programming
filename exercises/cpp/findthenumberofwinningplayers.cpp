/* SOLUTION 1  */
/* All tests passed */
class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) 
    {
        int sol = 0;
        int k = pick.size();
        bool zeropicked = false;
        map<int,vector<int>> m;
        for (int i = 0; i < k; i++)
        {
            if (pick[i][0] != 0)
            {
                m[pick[i][0]].push_back(pick[i][1]);
            }
            if (pick[i][0] == 0 && zeropicked == false)
            {
                sol++;
                zeropicked = true;
            }
        }    
        for (auto it : m)
        {
            sort(it.second.begin(), it.second.end()); 
            int count = 1;
            for (int i = 1; i < it.second.size(); i++)
            {
                if (it.second[i] == it.second[i-1])
                {
                    count++;
                    if (count == it.first + 1)
                    {
                        sol++;
                        break;
                    }
                }
                else 
                {
                    count = 1;
                }
            }
        }
        return sol; 
    }
};
