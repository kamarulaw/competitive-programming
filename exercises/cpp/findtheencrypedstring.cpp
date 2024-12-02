/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string getEncryptedString(string s, int k) 
    {
        string sol = "";
        for (int i = 0; i < s.length(); i++)
        {
            sol += s[(i+k) % s.length()];
        }    
        return sol;
    }
};
