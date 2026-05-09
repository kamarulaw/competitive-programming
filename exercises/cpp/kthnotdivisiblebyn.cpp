/* SOLUTION 1 */
/* not tested */

#include <iostream>

using namespace std;

int elem(int n, int k)
{
    int ans = 1;
    int curr = 0;
    while (curr!=k)
    {
        if (ans%n!=0)
        {
            curr++;
            ans++;
        }
        else 
        {
            ans++;
        }
    }
    return ans-1;
}

int main()
{
    int t;
    int n;
    int k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> k;
        cout << elem(n,k) << endl;
    }
    return 0;
}
