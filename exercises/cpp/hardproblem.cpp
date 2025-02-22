/* SOLUTION 1 */
/* psf */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m,a,b,c;
        cin >> m >> a >> b >> c;
        int ns = 0; 
        int sl = 2*m;
        if (a<=m)
        {
            ns+=a;
            sl-=a;
        }
        else 
        {
            ns+=m;
            sl-=m;
        }
        if (b<=m)
        {
            ns+=b;
            sl-=b;
        }
        if (c<=sl)
        {
            ns+=c;
            sl-=c;
        }
        else
        {
            ns+=sl;
            sl-=sl;
        }
        cout << ns << endl;
    }
}
