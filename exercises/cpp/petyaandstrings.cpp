/* SOLUTION 1 */ 
/* All tests passed */ 

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        int diff = tolower(s1[i]) - tolower(s2[i]);
        if (diff < 0)
        {
            cout << -1; 
            return 0;
        }
        else if (diff > 0)
        {
            cout << 1;
            return 0;
        }
        else 
        {
            continue;
        }
    }
    cout << 0;
    return 0;
}
