/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int dectobin(int x)
    {
        int pow = 0;
    }
    
    string convertDateToBinary(string date) 
    {
        int ind = 0;
        int n = date.size();
        string y = "";
        string m = "";
        string d = "";
        while (date[ind] != '-')
        {
            y += date[ind]; ind++;
        }    
        ind++;
        while (date[ind] != '-')
        {
            m += date[ind]; ind++;
        }
        ind++;
        while (ind < n)
        {
            d += date[ind]; ind++;
        }
        int y_ = stoi(y);
        int m_ = stoi(m);
        int d_ = stoi(d);
    }
};
