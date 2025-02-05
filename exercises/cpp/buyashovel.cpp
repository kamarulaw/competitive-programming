/* SOLUTION 1 */
/* All tests passed */ 

#include <iostream>

using namespace std;

int main()
{
    int k,r;
    cin >> k >> r;
    int factor = 1;
    while ((factor*k)%10 != 0 && (factor*k)%10 != r)
    {
        factor++;
    }
    cout << factor;
    return 0;
}
