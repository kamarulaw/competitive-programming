#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3; 
    int probs = 0; 
    cin >> n;
    for (int i = 0; i < n; i++) { 
        cin >> p1; 
        cin >> p2; 
        cin >> p3; 
        if (p1 + p2 + p3 >= 2)
            probs++;
    } 
    cout << probs; 
}
