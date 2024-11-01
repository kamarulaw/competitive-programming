/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        if (digits[n-1] != 9)
        {
            digits[n-1]++; 
            return digits;
        }
        else
        {
            int k = n-1;
            while (k >= 0 && digits[k] == 9)
            {
                digits[k] == 0;
                k--;
            } 

            if (k == -1)
            {
                digits[k]++;
                return digits;
            }
            else 
            {
                digits.insert(digits.begin(),1);
                return digits;
            }
           
        }
    }
};
