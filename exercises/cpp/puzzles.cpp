#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std; 

int main()
{
    int n, m; 
    cin >> n; 
    cin >> m; 
    int f[m];
    for (int i = 0; i < m; i++) 
        cin >> f[i];
    sort(f, f+m); 
    int diff = f[n-1] - f[0];
    int i = 0; 
    while (i < m) {
        diff = min(diff, f[n+i-1] - f[i]);
        i++;
    }
    cout << diff; 
    return 0;
}
