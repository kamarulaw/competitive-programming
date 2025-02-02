/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 15 */

#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> chars; 
    map<char,int> vowels;
    vowels['a'] = 1;
    vowels['A'] = 1;
    vowels['e'] = 1;
    vowels['E'] = 1;
    vowels['i'] = 1;
    vowels['I'] = 1;
    vowels['o'] = 1;
    vowels['O'] = 1;
    vowels['U'] = 1;
    vowels['u'] = 1;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (vowels[s[i]] == 0)
        {
            chars.push_back('.'); 
            chars.push_back(tolower(s[i]));
        }
    }
    string sol = "";
    for (int i = 0; i < chars.size(); i++)
    {
        sol += chars[i];
    }
    cout << sol << endl;
    return 0;
}

/* SOLUTION 2 */ 
/* All tests passed */

#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> chars; 
    map<char,int> vowels;
    vowels['a'] = 1;
    vowels['A'] = 1;
    vowels['e'] = 1;
    vowels['E'] = 1;
    vowels['i'] = 1;
    vowels['I'] = 1;
    vowels['o'] = 1;
    vowels['O'] = 1;
    vowels['U'] = 1;
    vowels['u'] = 1;
    vowels['y'] = 1;
    vowels['Y'] = 1;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (vowels[s[i]] == 0)
        {
            chars.push_back('.'); 
            chars.push_back(tolower(s[i]));
        }
    }
    string sol = "";
    for (int i = 0; i < chars.size(); i++)
    {
        sol += chars[i];
    }
    cout << sol << endl;
    return 0;
}
