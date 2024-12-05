/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 20 of 54 */
class Solution {
public:
    int strongPasswordChecker(string password) 
    {
        int ans = 0;
        int containsuppercase = false;
        int containslowercase = false;
        int containsdigit = false;
        int n = password.size();
        int counter = 1;
        for (int i = 1; i < n; i++)
        {
            if (password[i] == password[i-1])
            {
                counter++;
            }
            if (password[i] != password[i-1])
            {
                while (counter >= 3)
                {
                    counter--;
                    ans++;  
                }
                counter = 1;
            }
        }
        for (int i = 0; i < n; i++)
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
        }
        
        bool boolsum = containsuppercase + containsdigit + containslowercase;
        if (containsuppercase && containsdigit && containslowercase && 6 <= password.length() && password.length() <= 20)
        {
            return ans;
        }
        if (1 == 1)
        {
            ans += boolsum;
            if (n + boolsum < 6)
            {
                int k = n + boolsum;
                while (k < 6)
                {
                    k++; 
                    ans++;
                }
            }
            else if (n + boolsum > 20)
            {
                int k = n + boolsum;
                while (k > 20)
                {
                    k--;
                    ans++;
                }
            }
        }
        return ans;
    }
};
