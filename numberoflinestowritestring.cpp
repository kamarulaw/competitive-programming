/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) 
    {
        int numlines = 1;
        int numpixels = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (numpixels + widths[s[i] - 'a'] <= 100)
            {
                numpixels += widths[s[i] - 'a'];
            }
            else
            {
                numlines++; 
                numpixels = widths[s[i] - 'a'];
            }
        }
        int tot = 0;
        for (int i = 0; i < s.length(); i++)
        {
            tot += widths[s[i] - 'a'];
        } 
        return {numlines, numpixels};    
    }
};
