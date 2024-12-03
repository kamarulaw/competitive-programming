/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string thousandSeparator(int n) 
    {
        string num = to_string(n);
        string ans = ""; 
        if (num.length() <= 3)
        {
            return num;
        }
        reverse(num.begin(), num.end());
        int numcounter = 0;
        for (int i = 0; i < num.length(); i++)
        {
            if (numcounter % 3 == 0 && i != 0)
            {
                ans += ".";
                ans += num[i];
                numcounter = 0;
            }
            else 
            {
                ans += num[i];
            }
            numcounter++;
        }
        reverse(ans.begin(), ans.end());
        if (ans[0] == '.')
        {
            return ans.substr(1,ans.length()-1);
        }
        return ans;    
    }
};
