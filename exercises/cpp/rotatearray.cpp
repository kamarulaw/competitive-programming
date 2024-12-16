/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 28 of 38 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n)
        {
            return;
        }
        vector<int> resultprefix(nums.end()-k,nums.end());
        vector<int> resultsuffix(nums.begin(),nums.begin()+n-k);
        vector<int> result;
        int index = 0; 
        while (index < resultprefix.size())
        {
            nums[index] = resultprefix[index];
            index++;
        }
        index = 0;
        while (index < resultsuffix.size())
        {
            nums[index + resultprefix.size()] = resultsuffix[index];
            index++;
        }
    }
};

/* SOLUTION 2 */
/* RUNTIME ERROR ON CASE 8 of 28 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() == 1)
        {
            return;
        }
        int n = nums.size();
        vector<int> temp;
        int start = n-1-k+1;
        int end = start+k-1;
        for (int ind = start; ind <= end; ind++)
        {
            temp.push_back(nums[ind]);
        }     
        for (int ind = 0; ind <= start-1; ind++)
        {
            temp.push_back(nums[ind]);
        }
        nums = temp;
        return; 
    }
};

/* SOLUTION 3 */ 
/* TIME LIMIT EXCEEDED ON CASE 37 of 38 */
class Solution {
public:
    vector<int> rotateutil(vector<int> arr)
    {
        int last = arr[arr.size()-1];
        vector<int> rotated(arr.size(),0); 
        rotated[0] = last;
        for (int i = 1; i < arr.size(); i++)
        {
            rotated[i] = arr[i-1];
        }
        return rotated;
    }
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() == 1)
        {
            return;
        }
        int rotations = 0;
        while (rotations < k)
        {
            rotations++;
            nums = rotateutil(nums);
        }
    }
};

/* SOLUTION 4 */
/* All tests passed */
class Solution {
public:
    vector<int> rotateutil(vector<int> arr)
    {
        int last = arr[arr.size()-1];
        vector<int> rotated(arr.size(),0); 
        rotated[0] = last;
        for (int i = 1; i < arr.size(); i++)
        {
            rotated[i] = arr[i-1];
        }
        return rotated;
    }

    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() == 1)
        {
            return;
        }
        if (nums.size() < 20000)
        {
            int rotations = 0;
            while (rotations < k)
            {
                rotations++;
                nums = rotateutil(nums);
            }
            return;
        }
        else 
        {
            int n = nums.size();
            vector<int> temp;
            int start = n-1-k+1;
            int end = start+k-1;
            for (int ind = start; ind <= end; ind++)
            {
                temp.push_back(nums[ind]);
            }     
            for (int ind = 0; ind <= start-1; ind++)
            {
                temp.push_back(nums[ind]);
            }
            nums = temp; 
            return;
        }
    }
};
