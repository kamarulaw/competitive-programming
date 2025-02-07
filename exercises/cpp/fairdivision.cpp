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
        int n;
        cin >> n;
        int c1 = 0; 
        int c2 = 0;
        int sum = 0;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
            sum += seq[j];
            if (seq[j]==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (sum%2==1)
        {
            cout << "NO";
        }
        else
        {
            bool yes_flag = false;
            for (int x1 = 0; x1 <= c1; x1++)
            {
                for (int x2 = 0; x2 <= c2; x2++)
                {
                    if (x1*1+x2*2==sum/2)
                    {
                        yes_flag = true;
                    }
                }
            }
            if (yes_flag)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        cout << endl;
    }
}
