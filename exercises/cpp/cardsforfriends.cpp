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
        int w,h,n;
        cin >> w >> h >> n;
        int sol = 1;
        while (w%2==0||h%2==0)
        {
            if (w%2==0)
            {
                w/=2;
                sol*=2;
            }
            if (h%2==0)
            {
                h/=2;
                sol*=2;
            }
        }
        if (sol>=n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
