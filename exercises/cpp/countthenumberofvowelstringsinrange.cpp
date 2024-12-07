/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) 
    {
        int sol = 0;
        for (int i = left; i <= right; i++)
        {
            bool flag = true;
            if (!(words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0]  == 'u'))
            {
                flag = false;
            }
            if (!(words[i][words[i].length()-1] == 'a' || words[i][words[i].length()-1] == 'e' || words[i][words[i].length()-1] == 'i' || words[i][words[i].length()-1] == 'o' || words[i][words[i].length()-1]  == 'u'))
            {
                flag = false;
            }
            if (flag)
            {
                sol++;
            }
        }    
        return sol;
    }
};
