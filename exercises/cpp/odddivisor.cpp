/* SOLUTION 1 */
/* psf */

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool ho(unsigned long long int num)
{
    for (int i = 3; i <= (int)pow(num,.5)+1; i+=2)
    {
        if (num%i==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    unsigned long long int num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num; 
        if (ho(num))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
