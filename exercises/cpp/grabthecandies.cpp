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
        int esum = 0;
        int osum = 0;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (num%2==0)
            {
                esum+=num;
            }
            else 
            {
                osum+=num;
            }
        }
        if (esum>osum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl; 
        }
    }
}
