/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        int n = num.size();
        int num_ = 0;
        for (int i = 0; i < n; i++)
        {
            num_ += num[i] * pow(10,n-i-1);
        }    
        num_ += k;
        vector<int> sol; 
        while (num_ > 0)
        {
            sol.push_back(num_ % 10);
            num_ /= 10;
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};
