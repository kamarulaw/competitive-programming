/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                k++;
                nums.erase(nums.begin() + i);
            }
        }
        return k;
    }
};

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int count = 0;
        int badindloc = nums.size()-1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == val)
            {
                count++;
            }

            while(nums[i] == val)
            {
                if (nums[badindloc] != val) 
                {
                    int temp = nums[badindloc];
                    nums[badindloc] = nums[i];
                    nums[i] = temp;
                    badindloc--;
                    break;
                }
            }
        }
        return count;    
    }
};

/* SOLUTION 3 */
/* psf */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int count = 0;
        int badindloc = nums.size()-1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == val)
            {
                while (badindloc >= 0 && nums[badindloc] == val)
                {
                    badindloc--;
                }
                int temp = nums[badindloc];
                nums[badindloc] = nums[i];
                nums[i] = temp;
                count++;
            }
        }
        return count;    
    }
};
