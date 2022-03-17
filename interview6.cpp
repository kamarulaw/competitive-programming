#include <vector>
#include <iostream>

using namespace std;

// Find Array Peak
// Test Case[1, 4, 9, 12, 8, 2] -> 12

// Solution 1: O(n)
int peak_sol1(vector<int> arr) { 
  for (int i = 0; i < arr.size()-1; i++) { 
    if (arr[i] > arr[i+1]) {
      return arr[i]; 
    }
  }
  return -1; 
}

// Solution 2: O(log n)
int binsearch(vector<int> A, int lo, int hi, int elem) { 
  while (lo < hi) { 
    int mid = lo + (hi-lo)/2; 
    if (A[mid] == elem){ 
      return mid; 
    } else if (A[mid] < elem) { 
      lo = mid+1;
    } else { 
      hi = mid-1; 
    }
  }
  return -1; // if element is not found
}

int peak_sol2(vector<int> A) {
  int mid = lo + (hi-lo) / 2; 
  if (isSafe(A,mid)) { 
    if (isAscencionPoint(A,mid)) { 
      peak_sol2(subsetUp(A, mid)); 
    } else if (isDescencionPoint(A,mid)) { 
      peak_sol2(subsetDown(A,mid));
    } else { 
      return mid; 
    }
  }
  return -1; 
}

vector<int> subsetUp(vector<int> arr, int ind) { 
  vector<int> newarr;
  for (int i = ind; i < arr.size(); i++) 
    newarr.push_back(arr[i]); 
  return newarr; 
}

vector<int> subsetDown(vector<int> arr, int ind) { 
  vector<int> newarr;
  for (int i = 0; i <= ind; i++) 
    newarr.push_back(arr[i]); 
  return newarr; 
}

bool isSafe(vector<int> A, int ind) { 
  return 0 <= ind && ind < A.size(); 
}

bool isAscencionPoint(vector<int> A, int ind) { 
  return A[ind-1] < A[ind] && A[ind] < A[ind+1]; 
}

bool isDescencionPoint(vector<int> A, int ind) { 
  return A[ind-1] > A[ind] && A[ind] > A[ind+1];
}

bool isPeak(vector<int> A, int ind) { 
  return A[ind-1] < A[ind] && A[ind] > A[ind+1];
}

// Question 3: 