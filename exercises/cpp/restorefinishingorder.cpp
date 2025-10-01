/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) 
    {
        map<int,int> friends_map;
        for (int i = 0; i < friends.size(); i++)
        {
            friends_map[friends[i]]++;
        }    
        vector<int> result;
        for (int i = 0; i < order.size(); i++)
        {
            if (friends_map[order[i]]==1)
            {
                result.push_back(order[i]);
            }
        }
        return result;
    }
};
