/* SOLUTION 1 */
/* All tests passed */

#include <iostream>

using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    bool allgbw = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c; 
            if (c!='G'&&c!='B'&&c!='W')
            {
                allgbw = false; break;
            }
        }
        if (!(allgbw))
        {
            break;
        }
    }
    if (allgbw)
    {
        cout << "#Black&White";
    }
    else
    {
        cout << "#Color";
    }
}
