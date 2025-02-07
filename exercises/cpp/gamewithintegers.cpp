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
        int iters = 1;
        while (iters <= 10)
        {
            if (n%3==2||n%3==1)
            {
                cout << "First"; break;
            }
            else
            {
                n++;
            }
            if (n%3==1)
            {
                n--;
            }
            else if (n%3==2)
            {
                n++;
            }
            else 
            {
                cout << "First"; break;
            }
            iters++;
        }
        if (iters >= 11)
        {
            cout << "Second";
        }
        cout << endl;
    }
}
