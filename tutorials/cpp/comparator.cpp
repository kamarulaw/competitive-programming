#include <map>
#include <vector>
#include <algorithm> // contains std::sort
#include <iostream>

using namespace std;

bool comp(pair<int, int> x, pair<int, int> y) 
{
    if (x.second < y.second) { 
        return true;
    } else if (x.second == y.second) { 
        if (x.first < y.first)
            return true; 
    } else { 
        return false; 
    }
}

int main()
{
    int n = 3; 
    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    sort(a, a+n, comp);
    for (auto p: a)
        cout << "(" << to_string(p.first) << ", " << to_string(p.second) << ")" << endl; 
    return 0;
}
