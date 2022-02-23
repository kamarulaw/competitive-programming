#include <iostream>
#include <vector>

using namespace std; 

int bs(vector<int> A, int e, int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2; 
        if (A[mid] == e) { 
            return mid; 
        } else if (A[mid] < e) { 
            lo = mid + 1; 
        } else { 
            hi = mid - 1; 
        }
    }
    return -1; 
}

int main()
{
    vector <int> arr; 
    for (int i = 0; i < arr.size(); i++) 
        arr.push_back(3*i+1);  
    
    for (int i = 0; i < arr.size(); i++) 
        cout << i << " : " << arr[i] << "\n";
        
    /*
    cout << 1 << ": " << bs(arr, 1, 0, arr.size()) << "\n";
    cout << 4 << ": "<< bs(arr, 4, 0, arr.size()) << "\n";
    cout << 7 << ": "<< bs(arr, 7, 0, arr.size()) << "\n";
    cout << 10 << ": "<< bs(arr, 10, 0, arr.size()) << "\n";
    cout << 13 << ": "<< bs(arr, 13, 0, arr.size()) << "\n";
    cout << 16 << ": "<< bs(arr, 16, 0, arr.size()) << "\n";
    cout << 6 << ": "<< bs(arr, 6, 0, arr.size()) << "\n";
    cout << 9 << ": "<< bs(arr, 9, 0, arr.size()) << "\n";
    cout << 28 << ": "<< bs(arr, 28, 0, arr.size()) << "\n";
    cout << 27 << ": "<< bs(arr, 27, 0, arr.size()) << "\n";
    return 0;
    */
}



