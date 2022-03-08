 //Please write a function that computes the average of an array of floating point numbers.
#include util 

using namespace std; 

double avg(vector<double> arr) { 
  int max = INT_MAX; 
  int min = INT_MIN; 
  
  double result = 0; 
  if (arr.size() == 0) {
    return result; 
  }

  for (int i = 0; i < arr.size(); i++) 
    result += arr[i];
  return result/arr.size(); 
}


// Q2: 
// Suppose you work at a restaurant. 
// (1) If a group of customers arrive but all tables are currently occupied, you would add the group to a waitlist. 

// (2) When a table becomes empty, you would then find the first group in the waitlist whose size fits the empty table. // O(n)

//  (3) If a group decides they don't want to wait anymore, you should be able to remove them from the waitlist, too.

// Let’s implement a class that supports these features? (Feel free to use any built-in data structures/language features).

// Three Groups of size 4 come in. (G1, G2, G3)
// AddToWaitlist(Group G1)
// AddToWaitlist(Group G2)
// AddToWaitlist(Group G3)
// RemoveFromWaitlist(G2)
// SeatAtTableOfSize(4) --> G1, G3 
//


// Waitlist --> Group1,Group2,Group3
// I want to remove Group2

class Group{ 
  int size_; 
  string id; 
}; 

class WaitList{ 
  queue<Group> waitlist; 
  
  // What's the time complexity for this function
  void AddToWaitList(Group G) { 
    waitlist.push(G); // O(1)
    return; 
  }
  
  void RemoveFromWaitList(Group G) {     
    // waitist.erase(G) --> This would remove Group G from the waitlist queue.
    waitlist.erase(G); // O(n)
    return; 
  }

  // Interviewer ~ JR
  
};

