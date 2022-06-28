#include <map>
#include <vector>
#include <iostream>

using namespace std; 

int optimalValue(vector<int> arr, int numbinsA, int numbinsB) { 
    int n = arr.size(); 
    int asums[n]; 
    int bsums[n]; 
    memset(asums, 0, sizeof(asums));
    memset(bsums, 0, sizeof(bsums));
    for (int i = 0; i < arr.size(); i++) { 
        for (int j = 0; j < numbinsA; j++)  {
            asums[i] += arr[(i+j) % n];
        }
        for (int j = 0; j < numbinsB; j++) {
            bsums[i] += arr[(i+j) % n];
        }
    }

    int maxsum = asums[0] + bsums[numbinsA];
    for (int i = 0; i < n; i++) { 
        int lstrA = i; 
        int lendA = i + numbinsA; 
        for (int j = 0; j < n; j++) { 
            int lstrB = j; 
            int lendB = j + numbinsB; 
            if (asums[i] + bsums[j] > maxsum) {
                if ((lstrA <= lstrB && lstrB <= lendA) || (lstrA <= lendB && lendB <= lendA))
                    continue; 
                maxsum = asums[i] + bsums[j]; 
            }
        }
    }
}
int main() {
    return 0;
}
