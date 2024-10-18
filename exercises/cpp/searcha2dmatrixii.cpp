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

/* SOLUTION 2 */ 
/* psf */
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
            vector<int> r(matrix[row].begin()+row, matrix[row].begin()+matrix[0].size()); 
            cout << row << endl;
            cout << r.size() << endl;
            if (r.size() > 0 && bs(r,target))
            {
                return true;
            }

            vector<int> col;
            for (int colelem = row; colelem < matrix.size(); colelem++)
            {
                col.push_back(matrix[colelem][row]);
            }
            cout << col.size() << endl << endl;

            if (col.size() > 0 && bs(col,target))
            {
                return true;
            }
        }
        return false;
    }
};
