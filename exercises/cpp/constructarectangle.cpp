/* SOLUTION 1 */
/* All tests passed */ 

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l1,l2,l3;
        cin >> l1 >> l2 >> l3;
        bool flag = false;
        if ((l1==l2&&l3%2==0) || (l1==l3&&l2%2==0) || (l2==l3&&l1%2==0))
        {
            flag = true;
        }
        else if ((l1+l2==l3) || (l1+l3==l2) || (l2+l3==l1))
        {
            flag = true;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
