/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w%2==1||w==2)
    {
        cout << "NO";
    }
    else if(w%2==0)
    {
        cout << "YES";
    }
    return 0;
}
