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
        int n,k;
        int gc = 0;
        int rg = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++) 
        {
            int num;
            cin >> num;
            if (num>=k)
            {
                gc+=num;
            }
            else if (num==0&&gc>0)
            {
                gc--;
                rg++;
            }
        }
        cout << rg << endl;
    }
}
