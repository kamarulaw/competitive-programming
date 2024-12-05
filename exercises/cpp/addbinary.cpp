/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string addBinary(string a, string b) 
    {
        int alen = a.length();
        int blen = b.length(); 
        int min_ = min(alen,blen);
        int max_ = max(alen,blen);
        bool alonger = true;
        if (alen != blen && blen > alen)
        {
            alonger = false;
        }    
        if (alen != blen && alonger == true)
        {
            reverse(b.begin(), b.end());
            while (b.length() < a.length())
            {
                b += '0';  
            }
            reverse(b.begin(), b.end());
        }
        if (alen != blen && alonger == false)
        {
            reverse(a.begin(), a.end());
            {
                while (a.length() < b.length())
                {
                    a += '0';
                }
            }
            reverse(a.begin(), a.end());
        }
        string result = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        bool carry = false;
        for (int i = 0; i < a.length(); i++)
        {
            int oc = 0;
            if (a[i] == '1')
            {
                oc++;
            }
            if (b[i] == '1')
            {
                oc++;
            }
            if (carry == true)
            {
                oc++;
            }
            if (oc == 2)
            {
                result += '0';
                carry = true;
            }
            else if (oc == 3)
            {
                result += '1';
                carry = true;
            }
            else if (oc == 1)
            {
                result += '1';
                carry = false;
            }
            else 
            {
                result += '0';
                carry = false;
            }
        }
        if (carry == true)
        {
            result += '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
