#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <set>
#include <map>

using namespace std;

// Pair
void explainPair() 
{ 
    pair<int, int> p1 = {1,3};
    cout << p1.first << " " << p1.second; // prints 1 3
    
    pair<int, pair<int, int>> p2 = {1, {3,4}};
    cout << p2.first << " " << p2.second.second << p2.second.first; // prints 1 4 3
    
    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout << arr[1].second; // prints 5
}

// Vector 
void explainVector() 
{ 
    // creates empty vector
    vector<int> a; // {}
    a.push_back(1); // {1} 
    a.emplace_back(2); // {1,2}
    
    vector<pair<int, int>> vec; 
    vec.push_back({1,2});
    vec.emplace_back(1,2); 
    
    // Vector of size 5 with every element as 100
    vector<int> b(5, 100); // {100,100,100,100,100}
    
    // A vector of size 5 initialized with 0 might take garbage value, dependent on the vector
    vector<int> c(5); // {0,0,0,0,0}
    
    vector<int> d(5, 20); // {20, 20 ,20, 20, 20}
    vector<int> e(d); // {20, 20, 20, 20, 20}
    
    // Take the vector to be {10, 20, 30, 40}
    vector<int> f = {10,20,30,40};
    vector<int>::iterator it = f.begin(); // it does not point to 10, it points to the memory location.  we have to dereference
    
    it++; 
    cout << *(it) << "\n"; // prints 20
    
    it = it + 2; 
    cout << *(it) << "\n" // prints 40
    
    vector<int>::iterator it1 = f.end(); // returns an iterator referring to the past-the-end element in a vec container
    vector<int>::iterator it2 = f.rend(); // returns a reverse iterator pointing to the theoretical element preceding the 1st elem in a vec
    vector<int>::iterator it3 = f.rbegin(); // returns a reverse iterator pointing to the last element in the vec
    
    cout << f[0] << " " << f.at(0); // prints the first element of the vector
    
    // ways to print the vector
    for (vector<int>::iterator it = f.begin(); it != f.end(); it++) {
        cout << *(it) << " "; 
    }
    
    for (auto it = f.begin(); it != f.end(); it++) { 
        cout << *(it) << " ";
    }
    
    for (auto i: f) { 
        cout << i; 
    }
    
    // Erase 
    vector<int> g = {10, 20, 12, 23};
    g.erase(g.begin()); // takes an iterator to remove a single element
    
    vector<int> h = {10,20,12,23,35};
    h.erase(h.begin()+2, h.begin()+4); // takes a range and elements up to but not including the last elem in range
    
    // Insert
    vector<int> i(2, 100); // {100,100}
    i.insert(i.begin(), 300); // {300. 100, 100}
    i.insert(i.begin()+1, 2, 10); // {300, 10, 10, 100, 100}
    
    vector<int> copy(2, 50); // {50,50}
    i.insert(i.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
    
    vector<int> j = {10,20};
    cout << j.size(); // 2
    j.pop_back(); // {10}
    
    vector<int> k1 = {10,20};
    vector<int> k2 = {30,40};
    k1.swap(k2); // k1 = {30,40}; k2 = {10,20}
    
    j.clear(); // erases the entire vector
    cout << j.empty(); 
}

// List 
void explainList() 
{ 
    list<int> ls; 
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    
    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); // {2,4}
    
    // rest of functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Deque 
void explainDeque() 
{ 
    deque<int> dq; 
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3, 4, 1, 2}
    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}
    dq.back(); 
    dq.front()
    
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Stack 
void explainStack() 
{ 
    stack<int> st; 
    st.push(1); // {1}
    st.push(2); // {1, 2}
    st.push(3); // {1, 2, 3}
    st.push(3); // {1, 2, 3, 3}
    st.emplace(5); // {1, 2, 3, 3, 5}
    
    cout << st.top(); 
    st.pop(); 
    cout << st.top(); 
    cout << st.size() << "\n"; 
    
    cout << st.empty(); 
    stack<int> st1, st2; 
    st1.swap(st2);
}

// Queue 
void explainQueue() 
{ 
    queue<int> q; 
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5; 
    
    cout << q.back(); // prints 9
    
    cout << q.front(); // prints 1
    
    q.pop(); // {2, 9}
    
    cout << q.front(); // prints 2; 
    
    // size swap empty same as stack
}

// PriorityQueue
void explainPQ() 
{ 
    priority_queue<int> pq; 
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}
    
    cout << pq.top(); // prints 10
    
    pq.pop(); 
    
    cout << pq.top(); // prints 8 
    
    // size swap empty functions same as other
    
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1; 
    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    pq1.emplace(10); // {2, 5, 8, 10}
    
    cout << pq1.top(); // prints 2
}

// Set (stores unique elements in an ordered fashion)
void explainSet()
{
    set<int> st; 
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.insert(5); // {1, 2, 3, 4, 5}
    
    // begin(), end(), rbegin(), rend(), size(), 
    // empty(), and swap() are same as those above
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(3);
    
    // {1, 2, 3, 4, 5}
    it = st.find(6); // refers to end() since 6 is not present in set
    
    st.erase(5); // erase 5 // takes logarithmic time
    
    int cnt = st.count(1);
    
    auto it = st.find(3);
    st.erase(it);
    
    // {1, 2, 3, 4, 5}
    st.insert(3);
    st.insert(5); // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // deletes element in first iterator to last iterator not including last
    
    // lower_bound() and upper_bound() function work in the same way as in vector
    
    it = st.lower_bound(2);
    cout << *it << endl; 
    
    it = st.upper_bound(3);
    cout << *it << endl; 
}

// Multiset
void explainMultiSet()
{
    multiset<int> ms; 
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    
    ms.erase(1); // erases all 1s
    
    int cnt = ms.count(1);
    
    ms.erase(ms.find(1)); //erases a single 1
    
    ms.insert(1);
    
    ms.erase(ms.find(1), ms.find(1) + 2); // deletes two 1s
    
    // rest of functions same as set
}

// Unordered Set
void explainUSet()
{ 
    unordered_set<int> st; 
    // lower_bound and upper_bound function
    // does not work (since not sorted), but
    // rest of functions are the same as above
    // has a better complexity than set in most cases, except when collisions 
    // occur
}

// Map 
void explainMap()
{ 
    map<int, int> m1; 
    map<int, pair<int, int>> m2; 
    map<pair<int, int>, int> m3; 
    
    m1[1] = 2; 
    m1.emplace({3,1});
    m1.insert({2,4});
    
    for (auto it: m1)
        cout << it.first << ": " << it.second << endl; 
}

// Priority Queue
void explainPriorityQueue() 
{
  //stores greatest element at top 
  priority_queue<int> pq; 
  pq.push(5);
  pq.push(100); 
  pq.push(10);
  pq.push(70);
  pq.push(80);
  
  // see top element of priority_queue
  cout << pq.top() << endl; 
  
  // pop top element from priority_queue
  pq.pop();
  
  // see another element in priority_queue
  cout << pq.top() << endl; 
  
  // pop top element from priority_queue
  pq.pop()
  
  // print remaining elements of priority_queue
  while(!pq.empty()) { 
    cout << pq.top() << endl;
    pq.pop(); 
  }

int main()
{
    return 0;
}
