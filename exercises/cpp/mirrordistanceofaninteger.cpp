/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int mirrorDistance(int n) 
    {
        string n_ = to_string(n);
        reverse(n_.begin(),n_.end());
        int rev = stoi(n_);
        return abs(n-rev); 
    }
};
