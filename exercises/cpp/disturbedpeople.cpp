#include <iostream>

using namespace std;

int main()
{
    int n=0; 
    int k=0; 
    cin >> n; 
    int arr[n+1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i]; 
    for (int i = 2; i <= n-1; i++) { 
        if (arr[i-1] == 1 && arr[i+1] == 1 && arr[i] == 0) { 
            arr[i-1] = arr[i+1] = 0; 
            k++; 
        }
    }
    cout << k; 
    return 0;
}
