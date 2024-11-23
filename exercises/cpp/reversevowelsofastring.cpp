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

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool isvowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) 
    {
        vector<int> vowelinds;

        for (int i = 0; i < s.length(); i++)
        {
            if (isvowel(s[i]))
            {
                vowelinds.push_back(i);
            }
        }
        
        int vowelind = 0;
        int n = vowelinds.size();
        for (int i = 0; i < n / 2; i++)
        {
            int tmp = vowelinds[i];
            vowelinds[i] = vowelinds[n-i-1];
            vowelinds[n-1-i] = tmp;
        }
        string result = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isvowel(s[i]))
            {
                result += s[vowelinds[vowelind]];
                vowelind++;
            }
            else 
            {
                result += s[i];
            }
        }
        return result;
    }
};
