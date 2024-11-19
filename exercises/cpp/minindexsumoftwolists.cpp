/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        vector<string> answer;
        map<string,vector<int>> m;
        for (int i = 0; i < list1.size(); i++)
        {
            m[list1[i]].push_back(i);
        }     
        for (int i = 0; i < list2.size(); i++)
        {
            m[list2[i]].push_back(i);
        }
        int minindexsum = INT_MAX;
        for (auto it: m)
        {
            if (it.second.size() == 2)
            {
                if (it.second[0] + it.second[1] < minindexsum)
                {
                    minindexsum = it.second[0] + it.second[1];
                    answer.clear();
                    answer.push_back(it.first);
                }
                else if (it.second[0] + it.second[1] == minindexsum)
                {
                    answer.push_back(it.first);
                }
            }
        }
        return answer;
    }
};
