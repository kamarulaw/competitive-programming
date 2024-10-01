/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    static bool intervalcompare(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
        {
            return true;
        }
        else if (a[0] > b[0])
        {
            return false;
        }
        else  
        {
            if (a[1] > b[1])
            {
                return true;
            }
            else if (a[1] < b[1])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    bool intervalsintersect(vector<int> a, vector<int> b)
    {
        if (a[0] == b[0])
        {
            return true;
        }
        else if (b[0] < a[1])
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int curr_interval = 0;
        int next_interval = 1;
        int ans = 0;
        int len = intervals.size();

        sort(intervals.begin(),intervals.end(),intervalcompare);

        cout << s.size() << endl; 
        bool consolidated = false;
        while (curr_interval < len)
        {
            while (curr_interval < len && next_interval < len && intervalsintersect(intervals[curr_interval], intervals[next_interval]))
            {
                next_interval++;

                if (consolidated == false)
                {
                    consolidated = true; 
                    ans++;
                }
            }

            consolidated = false;
            curr_interval = next_interval; 
            next_interval = curr_interval + 1;  
        }
        return ans;
    }
};
