/* SOLUTION 1 */
/* psf */
class Solution {
public:
    string maximumTime(string time) 
    {
        vector<int> hds;
        for (int i = 0; i < time.length(); i++)
        {
            if (time[i] == '?')
            {
                hds.push_back(i);
            }
        }
        if (hds.size() == 1)
        {
            int ind = hds[0];
        }
        else if (hds.size() == 2)
        {

        }
        else if (hds.size() == 3)
        {

        }
        else
        {
            return "23:59";
        }
    }
};
