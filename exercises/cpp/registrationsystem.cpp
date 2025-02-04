/* SOLUTION 1 */ 
/* All tests passed */

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    map<string,int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
        if (m[s] == 1)
        {
            cout << "OK";
        }
        else
        {
            string s_ = s;
            s_ += to_string(m[s]-1);
            cout << s_;
        }
        cout << endl;
    }
    return 0;
}
