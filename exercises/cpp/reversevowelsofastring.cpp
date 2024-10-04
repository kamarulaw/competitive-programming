/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 368 of 489 */ 
class Solution {
public:
    bool isvowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) 
    {
        vector<int> vinds;

        for (int i = 0; i < s.length(); i++)
        {
            if (isvowel(s[i]))
            {
                vinds.push_back(i);
            }
        }
        
        int vind = 0;
        int n = vinds.size();
        
        for (int i = 0; i < n / 2; i++)
        {
            if (isvowel(s[i]))
            {
                char temp = s[vinds[i]];
                s[vinds[i]] = s[vinds[n-1-i]];
                s[vinds[n-1-i]] = temp;
            }
        }
        return s;
    }
};
