/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        vector<int> ois;
        vector<int> zis; 
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ois.push_back(i);
            }
            else
            {
                zis.push_back(i);
            }
        }
        string sol = "";
        if (ois.size() == 1)
        {
            for (int i = 0; i < zis.size(); i++)
            {
                sol += '0';
            }
            sol += '1';
            return sol;
        }
        else
        {
            sol += '1';
            for (int i = 0; i < zis.size(); i++)
            {
                sol += '0';
            }
            for (int i = 0; i < ois.size()-1; i++)
            {
                sol += '1';
            }
            reverse(sol.begin(), sol.end());
            return sol;
        }    

    }
};
