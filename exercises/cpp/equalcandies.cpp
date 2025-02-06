/* SOLUTION 1 */ 
/* All tests passed */ 

#include <vector>
#include <climits>
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
        int sol = 0; 
        int min_ = INT_MAX;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
            min_ = min(seq[j],min_);
        }
        for (int j = 0; j < n; j++)
        {
            sol += seq[j]-min_;
        }
        cout << sol << endl;
    }
    return 0;
}
