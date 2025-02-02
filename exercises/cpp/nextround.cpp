/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int n_;
    vector<int> seq;
    for (int i = 0; i < n; i++)
    {
        cin >> n_; 
        seq.push_back(n_);
    }
    sort(seq.begin(),seq.end());
    reverse(seq.begin(),seq.end());
    int kth_score = seq[k-1];
    int ind = k-1;
    if (kth_score > 0)
    {
        while (ind < n && seq[ind] == kth_score)
        {
            ind++;
        }
        cout << ind;
    }
    else 
    {
        while (ind >= 0 && seq[ind] == 0)
        {
            ind--;
        }
        cout << ind+1;
    }
    return 0;
}
