/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int myAtoi(string s) 
    {
        int ind = 0;
        int n = s.length();
        while(ind < n && s[ind] == ' ')
        {
            ind++;
        }
        bool negative = false;
        if (s[ind] == '-')
        {
            negative = true; ind++;
        }
        else if (s[ind] == '+')
        {
            ind++;
        }
        if (s[ind] - '0' < 0 || s[ind] - '0' > 9)
        {
            return 0;
        }
        string num = "";
        while (ind < n && 0 <= s[ind] - '0' && s[ind] - '0' <= 9)
        {
            num += s[ind]; ind++;
        }
        ind = 0;

        num = num.substr(ind,num.length()-ind);
        if (num.length() <= 10)
        {
            if (negative == true)
            {
                return -1 * stoi(num);
            }
            else 
            {
                return stoi(num);
            }
        }
        else
        {
            if (negative == true)
            {
                return INT_MIN;
            }
            else
            {
                return INT_MAX;
            }
        }
    }
};
