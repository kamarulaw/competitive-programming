/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n,k,l,d,c,p,nl,np;
    cin >> n >> k >> l >> d >> c >> p >> nl >> np;
    int ls = c*d;
    int mls = k*l;
    cout << min(mls/nl,min(ls,p/np))/n;
    return 0;
}
