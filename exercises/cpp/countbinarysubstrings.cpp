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

/* SOLUTION 2 */
/* psf */ 
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
                cout << i <<" : " << sstr << endl;
                int oc = 0; 
                int zc = 0;
                bool zerosfirsthalf = true;
                bool onesfirsthalf = true;
                for (int k = 0; k < sstr.length(); k++)
                {
                    if (sstr[k] == '1')
                    {
                        oc++;
                    }
                    else 
                    {
                        zc++;
                    }
                    if (sstr[0] == '0' && k < sstr.length() / 2 && sstr[k] != '0')
                    {
                        zerosfirsthalf = false;
                    }
                    if (sstr[0] == '1' && k < sstr.length() / 2 && sstr[k] != '1')
                    {
                        onesfirsthalf = false;
                    }
                }
                if ((oc == zc) && (zerosfirsthalf || onesfirsthalf))
                {
                    ans++;
                }
            }
        }  
        return ans;  
    }
};
