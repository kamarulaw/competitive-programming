/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isValid(string word) 
    {
        int n = word.size();
        if (n < 3)
        {
            return false;
        }    
        int ccount = 0;
        int vcount = 0;
        for (int i = 0; i < n; i++)
        {
            bool islowercase = ((int)'a' <= word[i] && word[i] <= (int)'z');
            bool isuppercase = ((int)'A' <= word[i] && word[i] <= (int)'Z');
            bool isdigit = (0 <= word[i] - '0' && word[i] - '0' <= 9);
            if (islowercase == false && isuppercase == false && isdigit == false)
            {
                return false;
            }
            if (islowercase || isuppercase)
            {
                char lower = tolower(word[i]);
                if (lower == 'a' ||  lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                {
                    vcount++;
                }
                else 
                {
                    ccount++;
                }
            }
        }
        return (vcount >= 1 && ccount >= 1);
    }
};
