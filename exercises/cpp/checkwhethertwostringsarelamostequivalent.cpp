/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) 
    {
        map<char,int> w1;
        map<char,int> w2;
        for (int i = 0; i < word1.size(); i++)
        {
            w1[word1[i]]++;
            w2[word2[i]]++;
        }    
        for (auto it : w1)
        {
            if (abs(it.second - w2[it.first]) > 3)
            {
                return false;
            }
        }
        for (auto it : w2)
        {
            if (abs(it.second - w1[it.first]) > 3)
            {
                return false;
            }
        }
        return true;
    }
};
