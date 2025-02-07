/* SOLUTION 1 */
/* All tests passed */

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
        int c1 = n/3;
        int c2 = n/3;
        if (n%3==2)
        {
            cout << c1 << " " << c2+1;
        }
        if (n%3==1)
        {
            cout << c1+1 << " " << c2;
        }
        if (n%3==0)
        {
            cout << c1 << " " << c2;
        }
        cout << endl;
    }
}
