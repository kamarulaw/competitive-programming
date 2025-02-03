/* SOLTUION 1 */
/* All tests passed */

#include <iostream>

using namespace std;

int main()
{
    int n,num1,num2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num1;
        int sol = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> num2;
            if (num2 > num1)
            {
                sol++;
            }
        }
        cout << sol << endl;
    }
    return 0;
}
