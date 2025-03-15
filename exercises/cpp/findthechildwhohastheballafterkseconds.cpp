/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int numberOfChild(int n, int k) 
    {
        int ind = 0;
        int iter = 0; 
        bool right = true;
        while (iter<k)
        {
            iter++;
            if (right==true&&ind!=n-1)
            {
                ind++;
                if (ind==n-1)
                {
                    right = false;
                }
            }
            else if (right==false&&ind!=0)
            {
                ind--;
                if (ind==0)
                {
                    right = true;
                }
            }
        }   
        return ind; 
    }
};
