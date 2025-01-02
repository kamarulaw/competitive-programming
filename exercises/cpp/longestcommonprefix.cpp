/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int count = 0;
        int shortest_length = INT_MAX;
        for (int i = 0; i < strs.size(); i++)
        {
            shortest_length = min(shortest_length, (int)strs[i].length());
        }
        for (int i = 0; i < shortest_length; i++)
        {
            char currchar = strs[0][count];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][count] != currchar)
                {
                    return strs[0].substr(0,count);
                }
            }
            count++;
        }    
        return strs[0].substr(0,count);
    }
};
