/* SOLUTION 1 */
/* All tests passed */ 

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; string s; cin >> n >> s; 
        int p1 = 0; 
        int p2 = n-1;
        while (p1<=p2 && s[p1]!=s[p2])
        {
            p1++;
            p2--;
        }
        if (p1<=p2)
        {
            cout << p2-p1+1; 
        }
        else
        {
            cout << 0;
        }
        cout << endl;
    }
}
