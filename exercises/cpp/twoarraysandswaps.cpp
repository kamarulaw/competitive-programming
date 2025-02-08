/* SOLUTION 1 */
/* All tests passed */ 

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
        cin >> n;
        cin >> k;
        vector<int> seqa(n,0);
        vector<int> seqb(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seqa[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> seqb[j];
        }
        sort(seqa.begin(),seqa.end());
        sort(seqb.begin(),seqb.end());
        int ind = 0;
        while (ind < k && seqa[ind] < seqb[n-ind-1])
        {
            ind++;
        }
        int sol = 0;
        for (int j = ind; j < n; j++)
        {
            sol += seqa[j];
        }
        for (int j = n-ind; j < n; j++)
        {
            sol += seqb[j];
        }
        cout << sol << endl;
    }
}
