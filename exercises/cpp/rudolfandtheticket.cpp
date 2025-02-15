/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> seqb(n,0);
        vector<int> seqc(m,0);
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            seqb[j] = num;
        }
        for (int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            seqc[j] = num;
        }
        int sol = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k_ = 0; k_ < m; k_++)
            {
                if (seqb[j]+seqc[k_]<=k)
                {
                    sol++;
                }
            }
        }
        cout << sol << endl;
    }
}
