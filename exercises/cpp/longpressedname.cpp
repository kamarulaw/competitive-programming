/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        map<char,int> sn;
        map<char,int> tn;
        
        for (int i = 0; i < name.length(); i++)
        {
            sn[name[i]]++;
        }    
        for (int i = 0; i < typed.length(); i++)
        {
            tn[typed[i]]++;
        }
        bool sol = true;
        for (auto it : sn)
        {
            if (sn[it.first] > tn[it.first])
            {
                return false;
            }
        }
        string typedsimplified = "";
        int nind = 0;
        int tind = 0;
        while (nind < name.length() && tind < typed.length())
        {
            if (name[nind] == typed[tind])
            {
                nind++;
                tind++;
            }
            else 
            {
                return false;
            }
            if (nind >= 1 && name[nind] != typed[tind] && name[nind-1] == typed[tind])
            {
                while (tind < typed.length() && name[nind-1] == typed[tind])
                {
                    tind++;
                }
            }
        }
        return tind == typed.length() && nind == name.length();
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        int nind = 0;
        int tind = 0;
        while (nind < name.length() && tind < typed.length())
        {
            if (name[nind] == typed[tind])
            {
                nind++;
                tind++;
            }
            else 
            {
                return false;
            }
            if (nind >= 1 && name[nind] != typed[tind] && name[nind-1] == typed[tind])
            {
                while (tind < typed.length() && name[nind-1] == typed[tind])
                {
                    tind++;
                }
            }
        }
        return tind == typed.length() && nind == name.length();
    }
};
