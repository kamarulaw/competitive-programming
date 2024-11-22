/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 18 of 91 */
class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j <= n-i; j+=2)
            {
                string sstr = s.substr(i,j); 
                int oc = 0; 
                int zc = 0;
                for (int k = 0; k < sstr.length(); k++)
                {
                    cout << i <<" : " << sstr << endl;
                    if (sstr[k] == '1')
                    {
                        oc++;
                    }
                    else 
                    {
                        zc++;
                    }
                }
                if (oc == zc)
                {
                    ans++;
                }
            }
        }  
        return (ans/2)+1;  
    }
};
