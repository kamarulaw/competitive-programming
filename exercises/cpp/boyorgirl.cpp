#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string name;
    cin >> name; 
    int n = name.length(); 
    unordered_map<char, int> umap; 
    for (int i = 0; i < n; i++) 
        umap[name[i]]++; 
    if (umap.size() % 2 == 1)    
        cout << "IGNORE HIM!";
    else 
        cout << "CHAT WITH HER!";
    return 0; 
}
