/* SOLUTION 1 */ 
/* MEMORY LIMIT EXCEEDED ON CASE 127 of 130 */
class Solution {
public:
    bool bs(vector<int> arr, int target)
    {
        int n = arr.size(); 
        int lo = 0; 
        int hi = n-1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == target)
            {
                return true;
            }
            else if (arr[mid] < target)
            {
                lo = mid + 1; 
            }
            else 
            {
                hi = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for (int row = 0; row < matrix.size(); row++)
        {
            if (bs(matrix[row],target))
            {
                return true;
            }
        }
        return false;
    }
};
