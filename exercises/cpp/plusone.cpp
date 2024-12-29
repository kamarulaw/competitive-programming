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

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        int i = n-1;
        while (i >= 0 && digits[i] == 9)
        {
            digits[i] = 0;
            i--; 
        }    
        if (i < 0)
        {
            reverse(digits.begin(),digits.end());
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        else 
        {
            digits[i] = digits[i] + 1;
        }
        return digits;
    }
};
