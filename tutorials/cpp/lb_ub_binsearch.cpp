#include <vector>
#include <algorithm> // contains std::sort and std::binary_search
#include <iterator> // contains std::distance
#include <iostream>

using namespace std;

int main()
{
    vector<int> v = {1,3,5,7};
    
    /* 
    std::binary_search
    
    algorithm w/ logarithmic time O(log(n)) that will return true if the value 
    searched for exists in the sorted sequence (or at least partitioned with
    respect to the value searched for)
    */
    cout << (binary_search(v.begin(), v.end(), 3) ? "Found" : "Not Found") << "\n"; 
    cout << (binary_search(v.begin(), v.end(), 4) ? "Found" : "Not Found") << "\n";
    cout << endl; 
    /*
    std::lower_bound
    
    algorithm w/ logarithmic time complexity O(log(n)) that will return an iterator 
    to the first element equal to or greater than a given value in a sorted sequence
    think of it as "first equal to or greater than"
    */
    
    auto it = lower_bound(v.begin(), v.end(), 3);
    auto it2 = lower_bound(v.begin(), v.end(), 4); 
    auto it3 = lower_bound(v.begin(), v.end(), 8); 
    
    cout << (it != v.end() ? to_string(*it) : "Not Found") << endl; // outputs 3
    cout << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl; // outputs 5
    cout << (it3 != v.end() ? to_string(*it3) : "Not Found") << endl; // outputs "Not Found"
    cout << endl; 
    
    cout << distance(v.begin(), v.begin()) << endl; 
    cout << distance(v.begin(), it) << endl; 
    cout << distance(v.begin(), it2) << endl; 
    cout << distance(v.begin(), it3) << endl; 
    cout << endl; 
    
    /* 
    std::upper_bound
    
    algorithm w/ logarithmic time complexity that will return an iterator to the 
    first element greater than a given value in a sorted sequence
    */
    
    it = upper_bound(v.begin(), v.end(), 3);
    it2 = upper_bound(v.begin(), v.end(), 4);
    it3 = upper_bound(v.begin(), v.end(), 8);
    
    cout << (it != v.end() ? to_string(*it) : "Not Found") << endl; // outputs 5
    cout << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl; // outputs 5
    cout << (it3 != v.end() ? to_string(*it3) : "Not Found") << endl; // outputs "Not Found"
    cout << endl; 

    // MORE UPPER_BOUND EXAMPLES

    
    // ARRAYS
    int n = 5; 
    int a[] = {3,6,8,10,11};
    
    // output behavior of upper_bound for ARRAY
    // ARRAYS
    int n = 5; 
    int a[] = {3,6,8,10,11};
    
    // output behavior of upper_bound for ARRAY
    cout << "UPPER BOUND w/ ARRAYS" << endl;
    cout << upper_bound(a,a+n,1) << endl;
    cout << upper_bound(a,a+n,10) << endl; 
    cout << upper_bound(a,a+n,3) << endl; 
    cout << upper_bound(a,a+n,11) << endl; 
    cout << endl; 
    
    // dereference output of upper_bound for ARRAY
    cout << *upper_bound(a,a+n,1) << endl;
    cout << *upper_bound(a,a+n,10) << endl; 
    cout << *upper_bound(a,a+n,3) << endl; 
    cout << *upper_bound(a,a+n,11) << endl; 
    cout << endl; 
    
    // output behavior of upper_bound - ARRAY
    cout << upper_bound(a,a+n,1) - a << endl;
    cout << upper_bound(a,a+n,10) - a << endl; 
    cout << upper_bound(a,a+n,3) - a<< endl; 
    cout << upper_bound(a,a+n,11) - a<< endl; 
    cout << endl << endl;
    
    // VECTORS
    vector<int> avec = {3,6,8,10,11};
    cout << "UPPER BOUND w/ VECTORS" << endl; 
    // dereference output of upper_bound for VECTOR
    cout << *upper_bound(avec.begin(), avec.end(), 1) << endl;
    cout << *upper_bound(avec.begin(), avec.end(), 10) << endl; 
    cout << *upper_bound(avec.begin(), avec.end(), 3)  << endl; 
    cout << *upper_bound(avec.begin(), avec.end(), 11) << endl; 
    cout << endl;

    cout << upper_bound(avec.begin(), avec.end(), 1) - avec.begin()<< endl;
    cout << upper_bound(avec.begin(), avec.end(), 10) - avec.begin()<< endl; 
    cout << upper_bound(avec.begin(), avec.end(), 3)  - avec.begin()<< endl; 
    cout << upper_bound(avec.begin(), avec.end(), 11) - avec.begin()<< endl; 
    cout << endl; 
    cout << endl; 
    return 0;
}
