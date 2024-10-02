/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int maxScore(string s) 
    {
        int n = s.length();
        string s1 = s.substr(0, 1);
        string s2 = s.substr(1, s.length()-1); 
        int maxscore = stringscore(s1, 'l') + stringscore(s2, 'r'); 
        for (int i = 1; i < n-1; i++)
        {
            s1 = s.substr(0, i+1);
            s2 = s.substr(i+1, s.length()-i-1);
            maxscore = max(maxscore, stringscore(s1,'l') + stringscore(s2,'r'));
        }
        return maxscore;
    }

    int stringscore(string s, char c)
    {
        int score = 0;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (c == 'l' && s[i] == '0')
            {
                score += 1;
            }

            if (c == 'r' && s[i] == '1')
            {
                score += 1;
            }
        }

        return score;
    }
};
