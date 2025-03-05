/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int sol = 0;
        string start_rep = bitset<32>(start).to_string();
        string _goal_rep = bitset<32>(goal).to_string();    
        for (int i = 0; i < start_rep.length(); i++)
        {
            if (start_rep[i]!=_goal_rep[i])
            {
                sol++;
            }
        }
        return sol;
    }
};
