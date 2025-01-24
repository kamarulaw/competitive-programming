/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        if (arr.size() < 3)
        {
            return false;
        }
        int ind = 1;
        int n = arr.size();
        bool equal = false;
        bool incstart = false;
        bool decstart = false;
        while (0 <= ind-1)
        {
            if (arr[ind] == arr[ind-1])
            {
                return false;
            }
            else if (arr[ind] > arr[ind-1])
            {
                ind++; 
                incstart = true;
            }
            else
            {
                break;
            }
        }    
        ind--;
        while (ind+1 < n)
        {
            if (arr[ind] <= arr[ind+1])
            {
                return false;
            }
            else
            {
                ind++;
                decstart = true;
            }
        }
        return incstart && decstart;
    }
};
