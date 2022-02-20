#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int l=0;
    int r=0;
    int u=0;
    int d=0;
    char c; 
    cin >> n; 
    for (int i = 0; i < n; i++) { 
        cin >> c; 
        if (c=='U')
            u++; 
        if (c=='D')
            d++; 
        if (c=='L')
            l++; 
        if (c=='R')
            r++; 
    }
    cout << 2*min(l,r) + 2*min(u,d);
    return 0;
}
