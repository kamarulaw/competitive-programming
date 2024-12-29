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
/* psf */
class Solution {
public:
    string addStrings(string num1, string num2) 
    {
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
            ans += 
            carry = (d1 + d2 + carry) / 10;
        }
    }
};
