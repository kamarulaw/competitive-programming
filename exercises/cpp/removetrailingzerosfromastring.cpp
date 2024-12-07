/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string removeTrailingZeros(string num) 
    {
        int ind = num.length()-1;
        while (ind >= 0 && num[ind] == '0')
        {
            ind--;
        }    
        return num.substr(0,ind+1);
    }
};
