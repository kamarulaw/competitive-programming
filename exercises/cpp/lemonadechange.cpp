/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 51 of 61 */
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int fivcount = 0;
        int tencount = 0;
        int ttycount = 0;
        int n = bills.size();
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
            {
                fivcount++;
            }
            else if (bills[i] == 10)
            {
                tencount++;
                if (fivcount < 1)
                {
                    return false;
                }
                else
                {
                    fivcount--;
                }
            }
            else
            {
                ttycount++;
                if (fivcount < 1 || tencount < 1)
                {
                    return false;
                }
                else
                {
                    fivcount--;
                    tencount--;
                }
            }
        } 
        return true;   
    }
};

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int fivcount = 0;
        int tencount = 0;
        int ttycount = 0;
        int n = bills.size();
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
            {
                fivcount++;
            }
            else if (bills[i] == 10)
            {
                tencount++;
                if (fivcount < 1)
                {
                    return false;
                }
                else
                {
                    fivcount--;
                }
            }
            else
            {
                ttycount++;
                if (tencount < 1 && fivcount < 3) 
                {
                    return false;
                }
                else if (tencount < 1 || fivcount < 1)
                {
                    return false;
                }
                else
                {
                    if (tencount >= 1 && fivcount >= 1)
                    {
                        fivcount--;
                        tencount--;
                    }
                    else if (fivcount >= 3)
                    {
                        fivcount-=3;
                    }
                }
            }
        } 
        return true;   
    }
};
