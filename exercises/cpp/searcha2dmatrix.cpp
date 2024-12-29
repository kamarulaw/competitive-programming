/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int a = matrix.size();
        int b = matrix[0].size();
        int n = a*b;
        int lo = 0;
        int hi = n-1;
        while(lo <= hi) // "lo < hi" -> "lo <= hi" took a bit of time to pick up on
        {
            // 9 = 4*2 + 1
            // 5 = 4*1 + 1
            // 6 = 4*1 + 2
            // 7 = 4*1 + 3
            // 8 = 4*2 + 0
            // 11 = 4*2 + 3
            int mid = lo + (hi - lo) / 2;
            int row = mid / b;
            int col = mid % b;
            cout << mid << " | " << row << " " << col << endl; 
            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] < target)
            {
                lo = mid+1;
            }
            else 
            {
                hi = mid-1;
            }
        }
        return false;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int n_ = m*n;
        int lo = 0;
        int hi = n_-1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            int mid_row = mid / n;
            int mid_col = mid % n;
            if (matrix[mid_row][mid_col] == target)
            {
                return true;
            }
            else if (matrix[mid_row][mid_col] < target)
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
};
