/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 5 */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int nofs(unsigned long long int n)
{
    int i = 1;
    int nofs_ = 0;
    while (i < n && nofs_ < 3)
    {
        if (n%i==0)
        {
            nofs_++;
        }
        i++;
    }
    if (nofs_ == 3)
    {
        return nofs_;
    }
    else 
    {
        return -1;
    }
}

int main()
{
    int n;
    unsigned long long int num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (nofs(num) == 3)
        {
            cout << "YES";
        }
        else if (nofs(num) == -1)
        {
            cout << "NO";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
