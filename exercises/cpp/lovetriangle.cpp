/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> graph(n+1,INT_MIN);
    for (int i = 1; i <= n; i++)
    {
        cin >> graph[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int node_a = i;
        int node_b = graph[i];
        int counter = 1;
        while (counter <= 3)
        {
            //cout << node_a << " " << node_b << " "<< counter << endl;
            node_a = node_b;
            node_b = graph[node_a];
            counter++;
            if (counter == 3 && node_b == i)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
