/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        int level = 0;
        int n = logs.size();
        for (int i = 0; i < n; i++)
        {
            string log = logs[i];
            if (log[0] == '.' && log[1] == '.')
            {
                if(level == 0)
                {
                    continue;   
                }
                else 
                {
                    level--;
                }
            }
            else if (log[0] == '.')
            {
                continue;
            }
            else
            {
                level++;
            }
        }
        return level;
    }
};
