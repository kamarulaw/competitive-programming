/* SOLUTION 1 */
/* All tests passed */ 

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    long k,n,w;
    cin >> k >> n >> w;
    long w_choose_2 = (w*(w+1))/2;
    long cost = k*w_choose_2;
    long borrow = cost - n;
    if (cost <= n)
    {
        cout << 0;
    }
    else 
    {
        cout << borrow;
    }
    return 0;
}
