/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int i_g = 0; 
        int i_s = 0;
        int content = 0;

        sort(g.begin(),g.end()); 
        sort(s.begin(),s.end()); 

        while (i_g < g.size() && i_s < s.size())
        {
            if (s[i_s] >= g[i_g])
            {
                i_g++;
                i_s++;
                content++;
            }
            else 
            {
                i_s++;
            }
        }

        return content;
    }
};
