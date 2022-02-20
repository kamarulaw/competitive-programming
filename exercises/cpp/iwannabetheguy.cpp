#include <iostream>
#include <unordered_set>

using namespace std; 

int main()
{
    int n; 
    int p; 
    int q; 
    unordered_set<int> uset;
    cin >> n; 
    cin >> p; 
    int xarr[p];
    for (int i = 0; i < p; i++)
        cin >> xarr[i];
    cin >> q; 
    int yarr[q];
    for (int i = 0; i < q; i++) 
        cin >> yarr[i];
    for (int i = 0; i < p; i++)
        uset.insert(xarr[i]);
    for (int i = 0; i < q; i++)
        uset.insert(yarr[i]);
    if (uset.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}
