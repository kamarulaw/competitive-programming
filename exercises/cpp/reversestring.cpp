/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        for (int i = 0; i < n/2; i++)
        {
            char tmp = s[i]; 
            s[i] = s[n-1-i];
            s[n-1-i] = tmp;
        }
        return;
    }
};
