/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        int sol = 0;
        string num_ = to_string(num);
        int n = num_.length();
        for (int i = 0; i < n; i++)
        {
            string ss = num_.substr(i,k);
            if (stoi(ss) == 0)
            {
                continue;
            }
            else if (ss.length() == k && num % stoi(ss) == 0)
            {
                sol++;
            }
        }    
        return sol;
    }
};
