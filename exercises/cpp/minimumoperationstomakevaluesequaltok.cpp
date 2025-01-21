/* SOLUTION  */
/* psf */
class Solution {
public:
    int penultimateelem(vector<int> arr)
    {
        int ans = 0;
        int n = arr[n-1];
        sort(arr.begin(),arr.end()); 
        int max_ = arr[n-1];
        for (int i = n-1; i >= 0; i--)
        {
            if (arr[i] != max_)
            {
                return arr[i];
            }
        }
        return -1;
    }
    
    int minOperations(vector<int>& nums, int k) 
    {
        int ans = -1;
        int nonnegans = 0;
        int n = nums.size();
        while (nums[n-1] != 1)
        {
            map<int,int> m;
            int count = 0;
            sort(nums.begin(),nums.end());
            int valid_ = penultimateelem(nums);
            if (valid_ == -1)
            {
                return ans;
            }
            for (int i = 0; i < n; i++)
            {
                if (nums[i] > valid_)
                {
                    count++;
                    m[nums[i]]++;
                }
            } 
            if (m.size() == 1 && count == n)
            {
                return nonnegans+1;
            }  
            else
            {
                nonnegans++;
                for (int i = 0; i < n; i++)
                {
                    if (nums[i] > valid_)
                    {
                        nums[i] = valid_;
                    }
                }
            }
            valid_--;
        }
        cout << nonnegans << endl;
        return ans;
    }
};
