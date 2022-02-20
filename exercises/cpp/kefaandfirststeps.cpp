#include <iostream>
#include <algorithm>

using namespace std; 

int main()
{
    int n; 
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int dp[n];
    dp[0] = 1; 
    for (int i = 1; i < n; i++) { 
        dp[i] = 1; 
        if (arr[i] >= arr[i-1]) 
            dp[i] = dp[i-1] + 1;
    }
    int m = dp[0];
    for (int i = 1; i < n; i++) 
        m = max(dp[i], m);
    cout << m; 
    return 0; 
}
