/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> sol;
        for (int i = 0; i < words.size(); i++)
        {
            bool contains = false;
            for (int j = 0; j < words[i].length(); j++)
            {
                if (words[i][j] == x)
                {
                    contains = true; 
                    break;
                }
            }
            if (contains)
            {
                sol.push_back(i);
            }
        }    
        return sol;
    }
};
