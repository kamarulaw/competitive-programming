/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) 
    {
        int elapsedtime = 0;
        int n = events.size(); 
        map<int,int> presstime;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                elapsedtime = events[i][1];
            }
            else
            {
                elapsedtime = (events[i][1]-elapsedtime);
            }

            presstime[events[i][0]] += elapsedtime;
        }
        int result1 = events[0][0];
        int result2 = INT_MIN;
        for (auto it : presstime)
        {
            cout << it.first << " " << it.second << endl;
            if (presstime[result1] > result2)
            {
                result1 = it.first;
                result2 = presstime[result1];
            }
        }
        return result1;
    }
};

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) 
    {
        int n = events.size(); 
        map<int,int> presstime;
        int elapsedtime = events[0][1];
        presstime[elapsedtime] = elapsedtime;
        for (int i = 1; i < n; i++)
        {
            elapsedtime = (events[i][1]-elapsedtime);
            presstime[events[i][0]] += elapsedtime;
        }
        int result1 = events[0][0];
        int result2 = INT_MIN;
        for (auto it : presstime)
        {
            cout << it.first << " " << it.second << endl;
            if (presstime[result1] > result2)
            {
                result1 = it.first;
                result2 = presstime[result1];
            }
        }
        return result1;
    }
};

/* SOLUTION 3 */
/* psf */
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) 
    {
        int n = events.size(); 
        map<int,int> presstime;
        int elapsedtime = events[0][1];
        presstime[events[0][0]] = elapsedtime;
        for (int i = 1; i < n; i++)
        {
            elapsedtime = (events[i][1]-elapsedtime);
            presstime[events[i][0]] += elapsedtime;
        }
        int result1 = events[0][0];
        int result2 = INT_MIN;
        for (auto it : presstime)
        {
            cout << it.first << " " << it.second << endl;
            if (presstime[it.first] > result2)
            {
                result1 = it.first;
                result2 = presstime[result1];
            }
        }
        return result1;
    }
};
