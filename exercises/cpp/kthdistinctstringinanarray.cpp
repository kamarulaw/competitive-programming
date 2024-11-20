/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        map<string, int> m;
        vector<string> distinct;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (m[arr[i]] == 1)
            {
                distinct.push_back(arr[i]);
            }
        }
        if (distinct.size() < k)
        {
            return "";
        }
        return distinct[k-1];
    }
};
