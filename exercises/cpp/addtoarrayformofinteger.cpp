/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 3 of 152 */
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

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        vector<int> k_;
        while (k > 0)
        {
            k_.push_back(k % 10);
            k /= 10;
        }    
        while (k_.size() < num.size())
        {
            k_.push_back(0);
        }
        if (num.size() < k_.size())
        {
            reverse(num.begin(),num.end());
            while (num.size() < k_.size())
            {
                num.push_back(0);
            }
            reverse(num.begin(),num.end());
        }
        reverse(num.begin(),num.end());
        int carry = 0;
        vector<int> result(k_.size(),0);
        for (int i = 0; i < k_.size(); i++)
        {
            result[i] = ((carry + k_[i] + num[i]) % 10);
            carry = ((carry + k_[i] + num[i]) / 10);
        }
        if (carry != 0)
        {
            result.push_back(carry);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
