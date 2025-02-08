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
        int n;
        cin >> n;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
        }
        int consec = 0; 
        int sol = consec;
        bool lastwaszero = false;
        for (int j = 0; j < n; j++)
        {
            if (seq[j]==0)
            {
                if (lastwaszero)
                {
                    consec++;
                }
                else 
                {
                    consec = 1;
                    lastwaszero = true;
                }
                sol = max(consec,sol);
            }
            else 
            {
                consec = 0;
                lastwaszero = false;
            }
        }
        cout << sol << endl;
    }
}
