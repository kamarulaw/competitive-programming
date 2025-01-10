/* SOLUTION 1 */
/* psf */
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) 
    {
        string real1 = "";
        string real2 = "";
        string comp1 = "";
        string comp2 = "";
        int ind = 0;
        while (ind < num1.length() && num1[ind] != '+')
        {
            real1 += num1[ind]; ind++;
        }    
        ind = 0;
        while (ind < num2.length() && num2[ind] != '+')
        {
            real2 += num2[ind]; ind++;
        }
        
    }
};
