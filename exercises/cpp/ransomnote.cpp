/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char,int> rm;
        map<char,int> mm;
        for (int i = 0; i < ransomNote.length(); i++)
        {
            rm[ransomNote[i]]++;
        }    
        for (int i = 0; i < magazine.length(); i++)
        {
            mm[magazine[i]]++;
        }
        for (auto it : rm)
        {
            if (mm[it.first] < it.second)
            {
                return false;
            }
        }
        return true;
    }
};
