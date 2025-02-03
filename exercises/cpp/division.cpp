/* SOLUTION 1 */
/* All tests passed */
#include <map>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,n_;
    cin >> n;
    string d1 = "Division 1";
    string d2 = "Division 2";
    string d3 = "Division 3";
    string d4 = "Division 4";
    for (int i = 0; i < n; i++)
    {
        cin >> n_;
        if (n_ <= 1399) 
        {
            cout << d4 << endl;
        }
        else if (1400 <= n_ && n_ <= 1599)
        {
            cout << d3 << endl;
        }
        else if (1600 <= n_ && n_ <= 1899)
        {
            cout << d2 << endl;
        }
        else 
        {
            cout << d1 << endl;
        }
    }
    return 0;
}
