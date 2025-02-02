/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 3 */
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

bool isprime(int a)
{
    if (a == 2)
    {
        return true;
    }
    if (a<2||a%2==0)
    {
        return false;
    }
    for (int i = 2; i <= (int)pow(a,.5)+1; i++)
    {
        if (a%i==0)
        {
            return false;
        }   
    }
    return true;
}

map<int,int> pf(int a)
{
    int a_ = a;
    map<int,int> sol;
    for (int i = 2; i <= a_; i++)
    {
        if (isprime(i))
        {
            while (a%i==0)
            {
                a /= i;
                sol[i]++;
            }
        }
    }
    return sol;
}

int main()
{
    int n;
    int n_;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n_;
        int maxgcd = INT_MIN;
        for (int j = 1; j <= n_; j++)
        {
            for (int k = j+1; k <= n_; k++)
            {
                int gcd = 1;
                map<int,int> pf1 = pf(j);
                map<int,int> pf2 = pf(k);
                set<int> keys;
                for (auto it : pf1)
                {
                    keys.insert(it.first);
                }
                for (auto it : pf2)
                {
                    keys.insert(it.first);
                }
                for (auto elem : keys)
                {
                    gcd *= pow(elem,min(pf1[elem],pf2[elem]));
                }
                maxgcd = max(gcd,maxgcd);
            }
        }
        cout << maxgcd << endl;
    }
    return 0;
}
