/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<bool> mask(n,true);
    for (int i = 2; i < n; i++)
    {
        if (s[i]=='B'&&s[i-1]=='U'&&s[i-2]=='W')
        {
            mask[i]=false;
            mask[i-1]=false;
            mask[i-2]=false;
        }
    }
    string word = "";
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        if (mask[i])
        {
            word += s[i];
        }
        if (!(mask[i]))
        {
            if (word.length() > 0)
            {
                words.push_back(word);
                word = "";
            }
        }
    }
    if (word.length() > 0)
    {
        words.push_back(word);
    }
    string sol = "";
    for (int i = 0; i < words.size(); i++)
    {
        sol += words[i];
        if (i != words.size()-1)
        {
            sol += ' ';
        }
    }
    cout << sol;
    return 0;
}
