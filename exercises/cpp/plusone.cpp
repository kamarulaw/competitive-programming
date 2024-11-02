/* SOLUTION 1 */ 
/* All tests passed */
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
                digits[k] = 0;
                k--;
            } 

            if (k == -1)
            {
               
                digits.insert(digits.begin(),1);
                return digits;
            }
            else 
            {
                digits[k]++;
                return digits;
            }
           
        }
    }
};
