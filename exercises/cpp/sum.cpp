/* SOLUTION 1 */
/* All tests passed */
#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    long a,b,c,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a==b+c||b==a+c||c==a+b)
        {
            cout << "yes"; 
        }
        else 
        {
            cout << "no";
        }
        cout << endl;
    }
    return 0;
}
