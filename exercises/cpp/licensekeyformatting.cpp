/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        int dash_count = 0;
        vector<char> ancs;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '-')
            {
                dash_count++;
            }
            else 
            {
                ancs.push_back(s[i]);
            }
        }
        int ind = 0;
        int fgs = ancs.size() % k;
        string sol = "";
        while (ind < fgs && ind < ancs.size())
        {
            sol += toupper(ancs[ind]);
            ind++;
        }   
        if (fgs > 0 && ancs.size() > k)
        { 
            sol += '-';
        }
        int counter = 0;
        while (ind < ancs.size())
        {
            sol += toupper(ancs[ind]);
            ind++;
            counter++;
            if (counter % k == 0 && counter != 0 && ind != ancs.size())
            {
                sol += '-';
            }
        }
        return sol;
    }
};
