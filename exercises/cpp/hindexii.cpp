/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 27 of 83 */
class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int numcitations = citations.size();
        int lo = 0;
        int hi = citations.size()-1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (citations[mid] == hi - mid + 1)
            {
                return citations[mid];
            }
            else if (citations[mid] < hi - mid + 1)
            {
                lo = mid + 1;
            }
            else if (citations[mid] > hi - mid + 1) 
            {
                hi = mid - 1;
            }
        }
        return 0;    
    }
};
