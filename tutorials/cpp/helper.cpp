#include <iostream>
#include <vector>
#include <string.h> // has memset

using namespace std; 

struct xy { 
  int x;
  int y; 
  double dfo() { 
    return sqrt(pow(x,2) + pow(y,2));
  }
}; 

struct xyz { 
  int x; 
  int y;
  int z; 
  double dfo() { 
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
  }
};

struct Human { 
  char init_; // her first initial
  int max_num_children; // maxiumum number of children Human is interested in having during lifetime
  int max_num_indoor_hobbies; // maximum number of indoor hobbies Human is allowed to have
  int max_num_outdoor_hobbies; // maximum number of outdoor hobbies Human is allowed to have
  int max_num_rec_substances; // excluding caffeine and alcohol
  bool has_children;
};


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

int main() {
  /* Binary Search */ 
  vector <int> arr; 
  for (int i = 0; i < arr.size(); i++) 
      arr.push_back(3*i+1);  
    
  for (int i = 0; i < arr.size(); i++) 
      cout << i << " : " << arr[i] << "\n";
        
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
    
  /* DP: Zero out static arr  */
  int cnt = 0; 
  int dp[5][5];
  memset(dp, 0, sizeof(dp));
  for (int i = 0; i < sizeof(dp) / sizeof(dp[0]); i++) { 
    for (int j = 0; j < sizeof(dp[0]) / sizeof(dp[0][0]); j++) { 
      cnt++; 
      cout << cnt << ":" << dp[i][j] << endl; 
    }
  }
  
  /* Struct Examples */
  
  //  Example 1
  xyz point; 
  cin >> point.x >> point.y >> point.z; 
  cout << "Distance From Origin: " << point.dfo() << endl; 
  
  // Example 2
  xy pts[2]; 
  for (int i = 0; i < sizeof(pts) / sizeof(pts[0]); i++) { 
    cin >> pts[i].x; 
    cin >> pts[i].y; 
    cout << endl; 
  }
  
  for (int i = 0; i < sizeof(pts) / sizeof(pts[0]); i++) 
    cout << "Distance From Origin: " << pts[i].dfo() << endl; 

  // Example 3
  Human Ade; 
  Ade.init_ = '*'; 
  Ade.max_num_children = 2;
  Ade.max_num_indoor_hobbies = 6; 
  Ade.max_num_outdoor_hobbies = 1; 
  Ade.max_num_rec_substances = 2;
  Ade.has_children = false; 
}



