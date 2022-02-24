#include <iostream>
#include <string> 
#include <queue> 
#include <utility>
#include <algorithm>
using namespace std;


bool cmp(pair<int, string> a, pair<int, string> b) {  
  return a.first <= b.first;
}

int main() {
  priority_queue<pair<int, string>, vector<pair<int, string>>, bool (*) (pair<int, string>, pair<int, string>)> pq(cmp);  
  pq.push(make_pair(1, "A"));
  pq.push(make_pair(2, "B"));
  pq.push(make_pair(3, "C"));
  pq.push(make_pair(4, "D"));
  pq.push(make_pair(5, "E"));
  
  while (!pq.empty()) { 
    cout << pq.top().second << endl; 
    pq.pop(); 
  }
    
  return 0; 
}
