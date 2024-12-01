/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int n = s.length();
        int fhvc = 0;
        int shvc = 0;
        for (int i = 0; i < n/2; i++)
        {
            char c1 = tolower(s[i]);
            char c2 = tolower(s[i + n/2]);
            if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u')
            {
                fhvc++;
            }
            if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u')
            {
                shvc++;
            }
        }
        return fhvc == shvc;   
    }
};
