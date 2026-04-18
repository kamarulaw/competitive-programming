/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) 
    {
        vector<int> bulbs_;
        for (int i = 0; i <= 100; i++)
        {
            bulbs_.push_back(0);
        }    
        for (int i = 0; i < bulbs.size(); i++)
        {
            if (bulbs_[bulbs[i]] == 0)
            {
                bulbs_[bulbs[i]] = 1;
            }
            else 
            {
                bulbs_[bulbs[i]] = 0;
            }
        }
        vector<int> sol;
        for (int i = 0; i < bulbs_.size(); i++)
        {
            if (bulbs_[i] == 1)
            {
                sol.push_back(i);
            }
        }
        return sol;
    }
};
