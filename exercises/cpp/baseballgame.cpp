/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        int ind = 0;
        int n = operations.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (operations[i] == "+")
            {
                v.push_back(v[v.size()-1] + v[v.size()-2]);
            }
            else if (operations[i] == "C")
            {
                v.pop_back();
            }
            else if (operations[i] == "D")
            {
                v.push_back(2*v[v.size()-1]);
            }
            else 
            {
                v.push_back(stoi(operations[i]));
            }
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i];
        }   
        return ans;
    }
};
