/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        int n = coordinates.size();
        int rise = coordinates[1][1] - coordinates[0][1];
        int run_ = coordinates[1][0] - coordinates[0][0];    
        cout << rise << " " << run_ << endl;
        for (int i = 1; i < coordinates.size(); i++)
        {
            int trise = coordinates[i][1] - coordinates[0][1];
            int trun_ = coordinates[i][0] - coordinates[i][0];
            cout << trise << " " << trun_ << endl;
            if (trise*run_ != trun_*rise)
            {
                return false;
            }
        }
        return true;
    }
};
