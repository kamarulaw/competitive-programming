/* SOLUTION 1 */
/* psf */ 
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        int gc = 0;
        cin >> n >> k;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
        }
        for (int j = 0; j < n; j++) 
        {
            if (seq[j]>=k)
            {
                gc+=seq[j];
            }
            if (seq[j]==0&&gc>0)
            {
                gc--;
            }
        }
        cout << gc << endl;
    }
}
