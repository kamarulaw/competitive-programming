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

bool cmp_pq(vector<int> a, vector<int> b) { 
  return a[1] <= b[1];
}

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

vector<vector<int>> perms;
void permutations(vector<int> arr, int i, int n) { 
  if (i == n-1) {
    perms.push_back(arr);
  }
  
  for (int j = i; j < n; j++) {
    swap(arr[i], arr[j]); 
    permutations(arr,i+1,n);
    swap(arr[i],arr[j]); // change arr state back to original
  }
}

vector<vector<int>> subsets; 
void generateSubsets(vector<int> arr, int i, vector<int> subset, int n) {
  if (i == n) { 
    subsets.push_back(subset);
    return; 
  }
  generateSubsets(arr, i+1, subset, n); // proceed without i-th element
  subset.push_back(arr[i]);
  generateSubsets(arr, i+1, subset, n); // proceed with i-th element
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
  
  /* Combinations */ 
  // Test Case
  vector<int> arr = {1,2,3,4};
  vector<int> subset; 
  int n = arr.size(); 
  
  // Generate Subsets
  generateSubsets(arr, 0, subset, n);
  
  // Print Subsets
  for (int i = 0; i < subsets.size(); i++) { 
    vector<int> csubset = subsets[i];
    for (int j = 0; j < csubset.size(); j++) { 
      cout << csubset[j] << " ";   
    }
    cout << endl; 
  }
  
  /* Permutations */ 
  // Test Case 
  vector<int> test = {1,2,3};
  int vec_size = test.size(); 
  
  // Generate Permutations
  permutations(test,0,vec_size);
  
  // Print Permutations
  for (int i = 0; i < perms.size(); i++) { 
    vector<int> curr_perm = perms[i];
    for (int j = 0; j < curr_perm.size(); j++) { 
      cout << curr_perm[j] << " "; 
    }
    cout << endl; 
  }
  
  /* Priority Queue with Custom Comparator*/
  priority_queue<vector<int>, vector<vector<int>>, bool(*)(vector<int>, vector<int>)> pq(cmp_pq);
  vector<int> v1 = {3,0,4,5,6,7};
  vector<int> v2 = {4,1,5,6,7,8};
  vector<int> v3 = {5,2,6,7,8,9};
  
  pq.push(v1);
  pq.push(v2);
  pq.push(v3);
  
  while (!pq.empty()) { 
    vector<int> curr = pq.top();
    for (int i = 0; i < curr.size(); i++) {
      cout << curr[i] << " "; 
    }
    cout << endl;
    pq.pop();
  }
}
