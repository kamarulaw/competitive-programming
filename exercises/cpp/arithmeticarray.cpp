/* SOLUITON 1 */
/* All tests passed */ 

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int numerator = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            numerator += num;
        }
        if (numerator < n)
        {
            cout << 1 << endl;
        }
        else if (numerator==n)
        {
            cout << 0 << endl;
        }
        else 
        {
            cout << numerator-n << endl;
        }
        
    }
    
}
