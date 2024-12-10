/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool alllower = true;
        bool allcaps = true;
        bool onecap = false;
        int cc = 0;;

        for (int i = 0; i < word.length(); i++)
        {
            if ((int)'A' > (int)word[i] || (int)word[i] > (int)'Z')
            {
                allcaps = false;
            }
            if ((int)'a' > (int)word[i] || (int)word[i] > (int)'z')
            {
                alllower = false;
            }
            if (i == 0 && (int)'A' <= (int)word[i] && (int)word[i] <= (int)'Z')
            {
                onecap = true;
                cc++;
            }
            else if ((int)'A' <= (int)word[i] && (int)word[i] <= (int)'Z')
            {
                cc++;
            }
            
        }
        return ((cc == 1 && onecap == true) || (alllower) || (allcaps));    
    }
};
