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

/* SOLUTION 2 */
/* All tests passed */

class Solution {
public:
    string convertDateToBinary(string date) 
    {
        int yy = stoi(date.substr(0,4));
        int mm = stoi(date.substr(5,2));
        int dd = stoi(date.substr(8,2));
        string yr = bitset<32>(yy).to_string();
        string mr = bitset<32>(mm).to_string();
        string dr = bitset<32>(dd).to_string();
        int y_rb = INT_MAX;
        int m_rb = INT_MAX;
        int d_rb = INT_MAX;
        for (int i = 0; i < yr.length(); i++)
        {
            if (yr[i]=='1')
            {
                y_rb = i;
                break;
            }
        }
        for (int i = 0; i < mr.length(); i++)
        {
            if (mr[i]=='1')
            {
                m_rb = i;
                break;
            }
        }
        for (int i = 0; i < dr.length(); i++)
        {
            if (dr[i]=='1')
            {
                d_rb = i;
                break;
            }
        }
        yr = yr.substr(y_rb,yr.length()-y_rb);
        mr = mr.substr(m_rb,mr.length()-m_rb);
        dr = dr.substr(d_rb,dr.length()-d_rb);
        string sol = "";
        sol+=yr;
        sol+='-';
        sol+=mr;
        sol+='-';
        sol+=dr;
        return sol;
    }
};
