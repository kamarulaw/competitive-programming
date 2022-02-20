#include <iostream>
#include <algorithm>

using namespace std; 

int main()
{
    int n; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    //reverse(arr, arr+n);
    int ind = 0; 
    int nt = 0; 
    int tempind = 0; 
    bool dbltused = false; 
    bool used[n] = {false};
    while (ind < n) { 
        if ((dbltused == true || arr[ind] == 4) && (used[ind] == false)) { 
            nt++;
            used[ind] = true; 
            ind++;
        } else if (used[ind] == false){
            nt++; 
            used[ind] = true; 
            tempind = ind+1; 
            int cartot = 4 - arr[ind]; 
            ind++; 
            while(tempind < n) { 
                if (cartot - arr[tempind] >= 0 && used[tempind] == false) { 
                    dbltused = true; 
                    cartot -= arr[tempind];
                    used[tempind] = true; 
                    tempind++; 
                } else { 
                    tempind++; 
                }
            }
        } else { 
            ind++; 
        }
    }
    cout << nt; 
    return 0; 
}
