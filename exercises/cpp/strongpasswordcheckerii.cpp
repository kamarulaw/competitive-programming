/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool strongPasswordCheckerII(string password) 
    {
        if (password.length() < 8)
        {
            return false;
        }
        bool containslowercase = false;
        bool containsuppercase = false;
        bool containsdigit = false;
        bool containsspecialchar = false;
        vector<char> specialchars = {'!','@','#','$','%','^','&','*','(',')','-','+'};

        for (int i = 0; i < password.length()-1; i++)
        {
            if (password[i] == password[i+1])
            {
                return false;
            }
        }
        for (int i = 0; i < password.length(); i++)
        {
            if ((int)'a' <= (int)password[i] && (int)password[i] <= (int)'z')
            {
                containslowercase = true;
            }
            if ((int)'A' <= (int)password[i] && (int)password[i] <= (int)'Z')
            {
                containsuppercase = true;
            }
            if ((int)'0' <= (int)password[i] && (int)password[i] <= (int)'9')
            {
                containsdigit = true;
            }
            for (int j = 0; j < specialchars.size(); j++)
            {
                if (password[i] == specialchars[j])
                {
                    containsspecialchar = true;
                }
            }
        }
        return containslowercase && containsuppercase && containsdigit && containsspecialchar;
    }
};
