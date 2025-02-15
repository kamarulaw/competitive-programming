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
        int ec = 0;
        int oc = 0;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (num%2==0)
            {
                ec++;
            }
            else
            {
                oc++;
            }
        }
        if (ec==0)
        {
            if (oc%2==0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else 
        {
            if (ec<n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
