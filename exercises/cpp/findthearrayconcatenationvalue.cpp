/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) 
    {
        int n = nums.size();
        int pt1 = 0;
        int pt2 = n-1;
        long long cval = 0;
        while (pt2 > pt1)
        {
            cout << pt1 << " " << pt2 << endl;
            string num1 = to_string(nums[pt1]);
            string num2 = to_string(nums[pt2]);
            string num = num1 + num2;
            cval += stoll(num);
            pt1++;
            pt2--;
        }    
        if (n % 2 == 1)
        {
            string num = to_string(nums[pt1]);
            cval += stoll(num);
        }
        return cval;
    }
};
