/* SOLUTION 1 */ 
/* psf: PRE-TESTS 2 & 3 Passed */
class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        nums = sort_(nums);
        int n = nums.size();
        for (int i = 0; i < n-1; i++)
        {
            if (nums[i] == n-i && nums[i] != nums[i+1])
            {
                return nums[i];
            }
        }
        int max = nums[n-1];
        return -1;
    }

    vector<int> merge(vector<int> a, vector<int> b)
    {
        int i_a = 0;
        int i_b = 0;
        int size_a = a.size();
        int size_b = b.size();
        int n = size_a + size_b;
        vector<int> result;
        while (i_a < size_a || i_b < size_b)
        {
            if (i_a < size_a && i_b < size_b)
            {
                if (a[i_a] < b[i_b])
                {
                    result.push_back(a[i_a]);
                    i_a++;
                }
                else if (a[i_a] > b[i_b])
                {
                    result.push_back(b[i_b]);
                    i_b++;
                }
                else 
                {
                    result.push_back(a[i_a]);
                    result.push_back(b[i_b]);
                    i_a++; 
                    i_b++;
                }
            }
            if (i_a < size_a && i_b >= size_b)
            {
               result.push_back(a[i_a]);
               i_a++; 
            }
            if (i_b < size_b && i_a >= size_a)
            {
                result.push_back(b[i_b]);
                i_b++;
            }
        }
        return result;
    }

    vector<int> sort_(vector<int> arr)
    {
        int n = arr.size();
        if (n <= 1)
        {
            return arr;
        }
        int size_a = n / 2;
        int size_b = n - size_a;
        vector<int> a; 
        vector<int> b;
        for (int i = 0; i < size_a; i++)
        {
            a.push_back(arr[i]);
        }
        for (int i = 0; i < size_b; i++)
        {
            b.push_back(arr[i + size_a]);
        }
        return merge(sort_(a),sort_(b));
    }
};
