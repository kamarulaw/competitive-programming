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
        map<int,int> m;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            m[num]++;
        }
        cout << m.size() << endl;
    }
}
