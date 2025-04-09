/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    int reverseDegree(string s) 
    {
        map<char,int> m;
        m['a'] = 26;
        for (int i = (int)'b'; i <= (int)'z'; i++)
        {
            m[char(i)] = m[char(i-1)]-1;
        }  
        int sol = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sol += ((i+1)*m[s[i]]);
        }  
        return sol; 
    }
};
