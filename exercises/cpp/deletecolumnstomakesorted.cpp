/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int n = strs[0].length();
        vector<string> strings_(n,"");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                strings_[i] += strs[j][i];
            }
        }
        int sol = 0;
        for (int i = 0; i < strings_.size(); i++)   
        {
            string col = strings_[i];
            sort(strings_[i].begin(), strings_[i].end());
            if (col.compare(strings_[i]) != 0)
            {
                sol++;
            }
        }
        return sol;
    }
};
