/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> skills(4,INT_MIN);
        for (int j = 0; j < 4; j++)
        {
            cin >> skills[j];
        }
        int max1 = max(skills[0],skills[1]);
        int max2 = max(skills[2],skills[3]);
        sort(skills.begin(),skills.end());
        if ((max1==skills[3]&&max2==skills[2])||(max1==skills[2]&&max2==skills[3]))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl; 
    }
    return 0;
}
