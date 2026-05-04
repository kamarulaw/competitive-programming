/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    string reversePrefix(string s, int k) 
    {
        int n = s.length();
        string firstk = "";
        string lastk = "";
        for (int i = 0; i < k; i++)
        {
            firstk.push_back(s[i]);
        }     
        reverse(firstk.begin(), firstk.end());
        for (int i = k; i < n; i++)
        {
            lastk.push_back(s[i]);
        }
        for (int i = 0; i < lastk.length(); i++)
        {
            firstk.push_back(lastk[i]);
        }
        return firstk; 
    }
};
