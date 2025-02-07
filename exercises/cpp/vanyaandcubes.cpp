/* SOLUTION 1 */
/* All tests passed */

#include <iostream>
using namespace std;

int sum(int x)
{
    return ((x)*(x+1))/2;
}

int main()
{
    int n;
    cin >> n;
    int guess = 1;
    int sumofsums = 0;
    if (n <= 3)
    {
        cout << 1;
        return 0;
    }
    while (sumofsums <= n)
    {
        sumofsums += sum(guess);
        if (sumofsums + sum(guess+1) > n)
        {
            break;
        }
        guess++;
    }
    cout << guess;
}
