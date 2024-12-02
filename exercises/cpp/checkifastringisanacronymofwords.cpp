/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) 
    {
        string word = "";
        for (int i = 0; i < words.size(); i++)
        {
            word += words[i][0];
        }    
        return word.compare(s) == 0;
    }
};
