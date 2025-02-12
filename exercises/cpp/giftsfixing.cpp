/* SOLUTION 1 */
/* psf */

#include <vector>
#include <climits>
#include <iostream>
#define ull unsigned long long int
using namespace std;

ull sum(vector<ull> seq)
{
    ull sol = 0;
    for (int i = 0; i < seq.size(); i++)
    {
        sol += seq[i];
    }
    return sol;
}

int main()
{
    ull t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ull n;
        cin >> n;
        ull mina = INT_MAX;
        ull minb = INT_MAX;
        vector<ull> seqa(n,0);
        vector<ull> seqb(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seqa[j];
            mina = min(seqa[j],mina);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> seqb[j];
            minb = min(seqb[j],minb);
        }
        int ind = 0;
        ull sol = 0;
        while (sum(seqa)!=n*mina || sum(seqb)!=n*minb)
        {
            bool flag = false;
            if (seqa[ind%n] > mina && seqb[ind%n] > minb)
            {
                flag = true;
                seqa[ind%n]--;
                seqb[ind%n]--;
            }
            else if (seqa[ind%n] > mina)
            {
                flag = true;
                seqa[ind%n]--;
            }
            else if (seqb[ind%n] > minb)
            {
                flag = true;
                seqb[ind%n]--;
            }
            if (sum(seqa)!=n*mina || sum(seqb)!=n*minb)
            {
                flag = true;
            }
            if (flag)
            {
                sol++;
                ind++;
            }
            else
            {
                break;
            }
        }
        cout << sol << endl;
    }       
}
