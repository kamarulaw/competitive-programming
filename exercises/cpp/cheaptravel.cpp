/* SOLUTION 1 */
/* psf */

#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int 
    int wholes = n / m;
    int modulus = n % m;
    int minimumsum = INT_MAX;
    for (int i = 0; i <= wholes; i+=m)
    {
        minimumsum = min(minimumsum,(i*b)+(n-i)*a);
        
    }
    return 0;
}
