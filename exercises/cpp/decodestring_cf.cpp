/* SOLUTION 1 */
/* psf */
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        string s;
        vector<int> zinds;
        vector<bool> visited(n,false);
        cin >> n >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='0')
            {
                zinds.push_back(j);
            }
        }
        string sol = "";
        vector<char> zindchars;
        for (int j = 0; j < zinds.size()-1; j++)
        {
            if (zinds[j+1]==zinds[j]+1)
            {
                int ind1 = zinds[j]-1;
                int ind2 = zinds[j];
                int num = 10*ind1+ind2;
                visited[ind1] = true;
                visited[ind2] = true;
                visited[zinds[j+1]] = true;
                char c = char((int)'a'+num);
            }
            else if (zinds[])
            {
                
            }
        }
    }
    return 0;
}
