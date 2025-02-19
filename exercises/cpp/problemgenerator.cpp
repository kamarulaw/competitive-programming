/* SOLUTION 1 */
/* All tests passed */
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++)
    {
        int m,n;
        string a;
        cin >> n >> m >> a;
        map<char,int> m_;
        for (int j = 0; j < n; j++)
        {
            m_[a[j]]++;
        }
        int sol = 0;
        vector<char> chars = {'A','B','C','D','E','F','G'};
        for (auto elem : chars)
        {
            if (m_[elem] < m)
            {
                sol+=m-m_[elem];
            }
        }
        cout << sol << endl;
    }
}
