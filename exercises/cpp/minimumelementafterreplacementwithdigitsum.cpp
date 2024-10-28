/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int minElement(vector<int>& nums) 
    {
        int n = nums.size();
        int minimumelement = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int number = nums[i];
            int sumofdigits = 0;
            while (number > 0)
            {
                sumofdigits += number % 10;
                number /= 10;
            }
            minimumelement = min(minimumelement, sumofdigits);
        }
        return minimumelement;
    }
};

// array easy too easy, array medium too hard
