#include <iostream>
#include <algorithm>

using namespace std; 

int n; 
int b=0; 

int main()
{
    cin >> n; 
    while (n - 100 >= 0) { 
        n -= 100; 
        b++; 
    }
    while (n - 20 >= 0) {
        n -= 20; 
        b++; 
    }
    while (n - 10 >= 0) {
        n -= 10; 
        b++; 
    }
    
    while (n - 5 >= 0) { 
        n -= 5; 
        b++; 
    }
    
    while (n - 1 >= 0) { 
        n -= 1; 
        b++; 
    }
    
    cout << b; 
    
    return 0;
}