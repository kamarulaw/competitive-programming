/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) 
    {
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }    
        vector<int> elems;
        for (auto it : m)
        {
            elems.push_back(it.first);
        }
        sort(elems.begin(),elems.end());
        for (int i = 0; i < elems.size() / 2; i++)
        {
            int temp = elems[i];
            elems[i] = elems[elems.size()-i-1];
            elems[elems.size()-i-1] = temp;
        }
        if (elems.size()<=k)
        {
            return elems;
        }
        else 
        {
            vector<int> sol;
            for (int i = 0; i < k; i++)
            {
                sol.push_back(elems[i]);
            }
            return sol;
        }
    }
};
