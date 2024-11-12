/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) 
    {
        int n = apple.size();
        int m = capacity.size();
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += apple[i];
        }    
        sort(capacity.begin(),capacity.end());
        int index = m-1;
        while (total > 0)
        {
            total -= capacity[index];
            index--;
        }
        return abs(m-1-index);
    }
};
