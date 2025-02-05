/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mw = 0;
    int cw = 0;
    for (int i = 0; i < n; i++)
    {
        int m,c;
        cin >> m;
        cin >> c;
        if (m > c)
        {
            mw++;
        }
        else if (m < c)
        {
            cw++;
        }
        else 
        {
            continue;
        }
    }
    if (mw > cw)
    {
        cout << "Mishka";
    }
    else if (mw < cw)
    {
        cout << "Chris";
    }
    else 
    {
        cout << "Friendship is magic!^^";
    }
}
