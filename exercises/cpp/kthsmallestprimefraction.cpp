/* SOLUTION 1  */ 
/* TIME LIMIT EXCEEDED ON CASE 53 of 59 */
class Solution {
public:
    static bool comp(vector<int> frac1, vector<int> frac2)
    {
        return (double)frac1[0]/frac1[1] <= (double)frac2[0]/frac2[1]; 
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        int n = arr.size();
        vector<vector<int>> fracs;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    fracs.push_back({arr[i],arr[j]});
                }
            }
        }
        sort(fracs.begin(), fracs.end(), comp);
        return fracs[k-1];  
    }
};

/* SOLUTION 2 */ 
/* psf */
class Solution {
public:
    static bool comp(string frac1, string frac2)
    {
        
        int f1i = 0;
        string f1n = ""; 
        string f1d = "";
        while (frac1[f1i] != ' ')
        {
            f1n += frac1[f1i];
            f1i++;
        }
        f1i++;
        while (f1i < frac1.length())
        {
            f1d += frac1[f1i];
            f1i++;
        }
        int f2i = 0;
        string f2n = "";
        string f2d = "";
        while (frac2[f2i] != ' ')
        {
            f2n += frac2[f2i];
            f2i++;
        }
        f2i++;
        while (f2i < frac2.length())
        {
            f2d += frac1[f2i];
            f2i++;
        }
        return ((double)stoi(f1n)/stoi(f1d)) <= ((double)stoi(f2n)/stoi(f2d));
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        int n = arr.size();
        vector<string> fracs;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    string frac = to_string(arr[i]); 
                    frac += ' '; 
                    frac += to_string(arr[j]);
                    fracs.push_back(frac);
                }
            }
        }
        
        
        for (int i = 0; i < fracs.size(); i++)
        {
            cout << fracs[i] << endl;
        }
        cout << endl << endl;
        sort(fracs.begin(), fracs.end(), comp);
        for (int i = 0; i < fracs.size(); i++)
        {
            cout << fracs[i] << endl;
        }


        string answer = fracs[k-1];
        string an = "";
        string ad = "";
        int i = 0;
        while (answer[i] != ' ')
        {
            an += answer[i];
            i++;
        }  
        while (i < answer.length())
        {
            ad += answer[i];
            i++;
        }
        return {stoi(an), stoi(ad)};
    }
};
