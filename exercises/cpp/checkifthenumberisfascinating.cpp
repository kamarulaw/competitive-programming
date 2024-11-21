/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool isFascinating(int n) 
    {
        int x2 = n*2;
        int x3 = n*3;
        map<int,int> m;
        string num = to_string(n); 
        num += to_string(x2); 
        num += to_string(x3); 
        for (int i = 0; i < num.length(); i++)
        {
            m[num[i] - '0']++;
        }   
        bool allpresent = true;
        bool mapsize = (m.size() == 9);
        for (int i = 1; i <= 9; i++)
        {
            if (m[i] != 1)
            {
                allpresent = false;
                break; 
            }
        }
        return allpresent && mapsize;
    }
};
