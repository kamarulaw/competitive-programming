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

/* SOLUTION 2 */
/* RUNTIME ERROR ON CASE 7 of 81 */
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        bool samex = true;
        bool samey = true;
        for (int i = 0; i < coordinates.size(); i++)
        {
            if (coordinates[i][0] != x0)
            {
                samex = false;
            }
            if (coordinates[i][1] != y0)
            {
                samey = false;
            }
        }
        if (samex || samey)
        {
            return true;
        }
        set<double> slopes;
        double slope1 = (double)(coordinates[1][1]-coordinates[0][1])/(double)(coordinates[1][0]-coordinates[0][0]); 
        slopes.insert(slope1);
        for (int i = 0; i < coordinates.size(); i++)
        {
            slope1 = (double)(coordinates[i][1]-coordinates[1][1])/(double)(coordinates[i][0]-coordinates[1][0]);    
            slopes.insert(slope1);
            vector<int> vslopes(slopes.begin(), slopes.end());
            for (int j = 0; j < vslopes.size(); j++)
            {
                cout << vslopes[j] << " ";
            }
            cout << endl; 
            if (slopes.size() > 1)
            {
                return false;
            }
        }
        return true;
    }
};
