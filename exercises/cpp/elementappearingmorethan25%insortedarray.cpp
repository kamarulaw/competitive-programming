/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int max_ = INT_MIN; 
        int elem = INT_MIN;
        map<int,int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        } 
        for (auto it : m)
        {
            if (it.second > max_)
            {
                max_ = it.second;
                elem = it.first;
            }
        }
        return elem;
    }
};
