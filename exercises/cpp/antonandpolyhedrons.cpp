#include <map>
#include <iostream>

using namespace std;

int main() {
  int n, res = 0; 
  string temp; 
  map<string,int> m; 
  
  cin >> n; 
  
  m["Cube"] = 6; 
  m["Octahedron"] = 8; 
  m["Tetrahedron"] = 4;
  m["Dodecahedron"] = 12; 
  m["Icosahedron"] = 20; 
  
  for (int i = 0; i < n; i++) {
    cin >> temp; 
    res += m[temp];
  }
  cout << res << endl; 
  
  return 0;
}
