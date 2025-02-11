/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int oc = 0;
        int ec = 0;
        for (int j = 0; j < 2*n; j++)
        {
            int num;
            cin >> num; 
            if (num%2==0)
            {
                ec++;
            }
            else
            {
                oc++;
            }
        }
        if (ec==oc)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
