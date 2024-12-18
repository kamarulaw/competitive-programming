/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) 
    {
        int h1start = stoi(event1[0].substr(1,2));
        int m1start = stoi(event1[0].substr(3,2));
        int h1end__ = stoi(event1[1].substr(1,2));
        int m1end__ = stoi(event1[1].substr(3,2));

        int h2start = stoi(event2[0].substr(1,2));
        int m2start = stoi(event2[0].substr(3,2));   
        int h2end__ = stoi(event2[1].substr(1,2));
        int m2end__ = stoi(event2[1].substr(3,2));
        vector<bool> t1(60*24,false);
        vector<bool> t2(60*24,false);
        cout << h1start << ":" << m1start << " => " << h1end__ << ":" << m1end__ << endl;
        cout << h2start << ":" << m2start << " => " << h2end__ << ":" << m2end__;
        for (int i = 60*h1start + m1start; i <= 60*h1end__ + m1end__; i++)
        {
            t1[i] = true;
        }
        for (int i = 60*h2start + m2start; i <= 60*h2end__ + m2end__; i++)
        {
            t2[i] = true;
        }
        for (int i = 0; i < t1.size(); i++)
        {
            if (t1[i] == t2[i] && t1[i] == true)
            {
                return true;
            }
        }
        return false;
    }
};
