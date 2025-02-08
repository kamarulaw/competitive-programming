/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED on CASE 3 */

#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

set<vector<int>> subseqs;

int sum(vector<int> arr) 
{
    int total = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

void generate(int i,int n,vector<int> subseq)
{
    if (i==n)
    {
        sort(subseq.begin(),subseq.end());
        subseqs.insert(subseq);
        return;
    }
    generate(i+1,n,subseq);
    subseq.push_back(subseq[i]);
    generate(i+1,n,subseq);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int total = 0;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
            total += seq[j];
        }
        int ss = 0;
        generate(0,n,seq);
        bool flag = false;
        for (auto elem : subseqs)
        {
            int ss = sum(elem);
            if (ss%2==(total-ss)%2)
            {
                flag = true; break;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        subseqs.clear();
        cout << endl;
    }
}

/* SOLUTION 2 */
/* All tests passed */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int total = 0;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
            total += seq[j];
        }
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (seq[j]%2==(total-seq[j])%2)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}
