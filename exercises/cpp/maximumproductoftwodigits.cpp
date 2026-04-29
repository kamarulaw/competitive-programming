/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int maxProduct(int n) 
    {
        map<int,int> m;
        while (n > 0)  
        {
            m[n%10]++;
            n /= 10;
        }  
        vector<int> nums;
        for (auto it : m)
        {
            for (int i = 0; i < it.second; i++)
            {
                nums.push_back(it.first);
            }
        }
        sort(nums.begin(),nums.end());
        cout << nums.size() << endl;
        return nums[nums.size()-1] * nums[nums.size()-2];
    }
};
