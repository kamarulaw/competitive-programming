/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 214 of 317 */ 
class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        unsigned long long int a = stoull(num1);
        unsigned long long int b = stoull(num2);
        return to_string(a+b);
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        if (num1.compare("0") == 0)
        {
            return num2;
        }
        if (num2.compare("0") == 0)
        {
            return num1;
        }
        map<int,char> m;
        m[0]='0';m[1]='1';m[2]='2';m[3]='3';m[4]='4';m[5]='5';m[6]='6';m[7]='7';m[8]='8';m[9]='9';
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        while (num1.length() < num2.length())
        {
            num1 += '0';
        }    
        while (num2.length() < num1.length())
        {
            num2 += '0';
        }
        int carry = 0;
        string ans = "";
        for (int i = 0; i < num1.length(); i++)
        {
            int d1 = num1[i] - '0';
            int d2 = num2[i] - '0';
            int sum = d1 + d2 + carry;
            int d_ = sum % 10;
            ans += m[d_];
            carry = (d1 + d2 + carry) / 10;
        }
        ans += m[carry];
        int i = ans.length()-1;
        while (i >= 0 && ans[i] == '0')
        {
            i--;
        }
        ans = ans.substr(0,i+1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
