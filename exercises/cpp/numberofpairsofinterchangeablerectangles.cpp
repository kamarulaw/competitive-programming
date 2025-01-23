/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) 
    {
        long long ans = 0;
        long long n = rectangles.size();
        map<double,int> m;
        for (int i = 0; i < n; i++)
        {
            m[(double)(rectangles[i][0])/(double)(rectangles[i][1])]++;
        }    
        for (auto it : m)
        {
            long long num = (long long)(it.second)*(long long)(it.second-1); num /= 2;
            ans += num;
        }
        return ans;
    }
};
