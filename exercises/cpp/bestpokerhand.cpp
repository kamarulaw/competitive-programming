/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
        set<int> ss;
        map<int,int> rankmap;
        for (int i = 0; i < suits.size(); i++)
        {
            ss.emplace(suits[i]);
        }
        if (ss.size() == 1)
        {
            return "Flush";
        }
        for (int i = 0; i < ranks.size(); i++)
        {
            rankmap[ranks[i]]++;
        }
        for (auto it : rankmap)
        {
            if (it.second >= 3)
            {
                return "Three of a Kind";
            }
        }
        for (auto it : rankmap)
        {
            if (it.second == 2)
            {
                return "Pair";
            }
        }
        return "High Card";
    }
};
