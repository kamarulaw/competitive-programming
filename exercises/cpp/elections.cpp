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
        int a,b,c;
        cin >> a >> b >> c;
        if (a==max(b,c))
        {
            cout << 1 << " ";
        }
        else if (a>max(b,c))
        {
            cout << 0 << " ";
        }
        else 
        {
            cout << 1+max(b,c)-a << " ";
        }
        if (b==max(a,c))
        {
            cout << 1 << " ";
        }
        else if (b>max(a,c))
        {
            cout << 0 << " ";
        }
        else 
        {
            cout << 1+max(a,c)-b << " "; 
        }
        if (c==max(a,b))
        {
            cout << 1 << " ";
        }
        else if (c>max(a,b))
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1+max(a,b)-c;
        }
        cout << endl;
    }
}
