/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> digits(int n)
    {
        vector<int> sol;
        while (n > 0)
        {
            sol.push_back(n % 10);
            n /= 10;
        }
        return sol;
    }
    int subtractProductAndSum(int n) 
    {
        int prod = 1;
        int sum = 0;
        vector<int> v = digits(n);
        for (int i = 0; i < v.size(); i++)
        {
            prod *= v[i];
            sum += v[i];
        }
        return prod - sum;
    }
};
