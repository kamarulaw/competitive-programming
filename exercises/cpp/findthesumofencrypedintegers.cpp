/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int length(int n)
    {
        int digits = 0;
        while (n > 0)
        {
            digits++;
            n /= 10;
        }
        return digits;
    }

    int greatestdigit(int n)
    {
        int sol = INT_MIN;
        while (n > 0)
        {
            if (n%10 > sol)
            {
                sol = n%10;
            }
            n /= 10;
        }
        return sol;
    }

    int sumOfEncryptedInt(vector<int>& nums) 
    {
        int sol = 0;    
        for (int i = 0; i < nums.size(); i++)
        {
            int lengthdigit = length(nums[i]);
            int repeatdigit = greatestdigit(nums[i]);
            int encrypednumber = 0; 
            //cout << repeatdigit << " " << lengthdigit << endl;
            for(int i = 0; i < lengthdigit; i++)
            {
                encrypednumber += (repeatdigit * pow(10,i));
            }
            sol += encrypednumber;
        }
        return sol;
    }
};
