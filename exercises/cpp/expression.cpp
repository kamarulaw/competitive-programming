/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 3 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c; cin >> a >> b >> c; int sol = max(a+(b*c),max(a*(b+c),max(a*b*c,(a+b)*c))); cout << sol;
    return 0;
}
