/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int prod(vector<int> seq)
{
    int sol = 1;
    for (int i = 0; i < seq.size(); i++)
    {
        sol *= seq[i];
    }
    return sol;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
        }
        sort(seq.begin(),seq.end()); seq[0]++;
        cout << prod(seq) << endl;
    }
}
