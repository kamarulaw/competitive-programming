/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool makeEqual(vector<string>& words) 
    {
        if (words.size() == 1)
        {
            return true;
        }
        /*
        a : 1 
        b : 1
        c : 1

        a : 2 
        b : 1
        c : 1

        b : 1
        c : 1
        */
        map<char,int> m;
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            for (int j = 0; j < word.length(); j++)
            {
                m[word[j]]++;
            }
        }
        for (auto it : m)
        {
            if (it.second % words.size() != 0)
            {
                return false;
            }
        }
        return true;
    }
};
