/* SOLUTION 1 */
/* psf */ 

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        vector<int> seq;
        cin >> n >> k;
        for (int j = 0; j < k; j++)
        {
            int num;
            cin >> num;
            seq.push_back(num);
        }
        sort(seq.begin(),seq.end());
        reverse(seq.begin(),seq.end());
        if (seq[0]==1)
        {
            cout << k << endl;
        }
        else
        {
            int sol = 0;
            int onecount = 0;
            int lastnum = seq[0];
            for (int a = 1; a < k; a++)
            {
                if (seq[a]!=1)
                {
                    sol += (seq[a]-1);
                }
                else 
                {
                    onecount++;
                }
            }
            int solterm = sol + onecount;
            if (onecount==k-1)
            {
                cout << onecount << endl;
            }
            else 
            {
                cout << lastnum + solterm << endl;
            }
        }
    }
    return 0;
}
