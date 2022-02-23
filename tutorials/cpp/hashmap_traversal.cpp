#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // define hashamap
    unordered_map<int, int> umap; 
    
    // add elements to hashmap
    for (int i = 0; i < 10; i++) { 
        umap[i] = 2*i; 
    }
    
    //traverse hashmap
    for (auto x: umap) { 
        cout << "key: " << x.first << "\n";
        cout << "value: " << x.second <<"\n\n";
    }
    return 0;
}
