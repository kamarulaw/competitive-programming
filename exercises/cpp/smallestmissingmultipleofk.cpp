/* progress so far */
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        map<int,int> m;
        vector<int> sol_arr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % k == 0)
            {
                sol_arr.push_back(nums[i]/k);
            }
        }    
        sort(sol_arr.begin(), sol_arr.end());
        if (sol_arr.size() == 0 || sol_arr[0] != k)
        {
            return k;
        }
        else
        {
            for (int i = 0; i < sol_arr.size(); i++)
            {
                if (sol_arr[i] != k*(i+1))
                {
                    return (i+1)*k;
                }
            }
        }
        return (sol_arr.size())*k;
    }
};
