/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string removeStars(string s) {
        string ans;
        vector<char> result;

        for (int i = 0; i < s.length(); i++)
        {
            result.push_back(s[i]);

            if (is_star(s[i]))
            {
                result.erase(result.begin() + i);
                result.erase(result.begin() + (i-1));
            }
        }

        for (int i = 0 ; i < result.size(); i++)
        {
            ans += result[i];
        }
        return ans;
    }

    bool is_star(char c)
    {
        return c=='*';
    }
};

/* SOLUTION 2 */
/* TIME LIMMIT EXCCEDED ON CASE 44 of 65 */
class Solution {
public:
    string removeStars(string s) 
    {
        bool containsstar = true;
        while (containsstar)
        {
            int n = s.length();
            int starind = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '*')
                {
                    starind = i; break;
                }
            }
            if (starind == INT_MIN)
            {
                return s;
            }
            else 
            {
                int ind = starind;
                while (ind >= 0 && s[ind] == '*')
                {
                    ind--;
                }
                s.erase(s.begin() + starind);
                s.erase(s.begin() + ind);
            }
        }
        return s;    
    }
};
