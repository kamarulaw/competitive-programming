/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    
    string multutil(string num1, char digit, map<int,char> m)
    {
        int n = num1.length();
        int d = digit - '0';
        string result = "";
        int carry = 0;
        for (int i = n-1; i >= 0; i--)
        {
            int n1d = num1[i] - '0';
            int prod = n1d * d;
            result += m[((prod + carry) % 10)];
            carry = (prod + carry) / 10; 
        }
        result += m[carry];
        reverse(result.begin(),result.end());
        return result;
    }

    string sumutil(vector<string> padded_products, map<int,char> m)
    {
        int n = padded_products[0].length();
        int carry = 0;
        string result = "";
        for (int i = n-1; i >= 0; i--)
        {
            int total = 0;
            for (int j = 0; j < padded_products.size(); j++)
            {
                total += (padded_products[j][i] - '0');
            }
            total += carry;
            result += m[total % 10];
            carry = total / 10;
        }
        result += m[carry];
        int i = result.length()-1;
        while (i >= 0 && result[i] == '0')
        {
            i--;
        }
        result = result.substr(0,i+1);
        reverse(result.begin(),result.end());
        return result;
    }

    string multiply(string num1, string num2) 
    {
        if (num1.compare("0") == 0 || num2.compare("0") == 0)
        {
            return "0";
        }
        map<int,char> m;
        m[0] = '0'; m[1] = '1'; 
        m[2] = '2'; m[3] = '3'; 
        m[4] = '4'; m[5] = '5'; 
        m[6] = '6'; m[7] = '7'; 
        m[8] = '8'; m[9] = '9';
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
        int n = num1.length();
        int longest_padded_product_length = 0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<string> padded_products;
        for (int i = n-1; i >= 0; i--)
        {
            string product = multutil(num1,num2[i],m);
            // i + zero_pad_length = n-1 => zero_pad_length = n-1 - i
            int zero_pad_length = n-1-i;
            while (zero_pad_length > 0)
            {
                product += '0';
                zero_pad_length--;
            } 
            longest_padded_product_length = max(longest_padded_product_length, (int)product.length());
            padded_products.push_back(product);
        }
        for (int i = 0; i < padded_products.size(); i++)
        {
            reverse(padded_products[i].begin(),padded_products[i].end());
            while (padded_products[i].length() < longest_padded_product_length)
            {
                padded_products[i] += '0';
            }
            reverse(padded_products[i].begin(),padded_products[i].end());
        }
        return sumutil(padded_products,m);
    }
};
