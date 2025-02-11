/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
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
        if (n<4)
        {
            cout << 1 << endl;
        }
        else if (n%4==0)
        {
            cout << n/4 << endl;
        }
        else 
        {
            int sol = n/4; n -= 4*sol; sol += n/2; cout << sol << endl;
        }
    }
}
