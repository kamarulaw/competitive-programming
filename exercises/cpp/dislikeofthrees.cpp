/* SOLUTION 1 */
/* All tests passed */
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int k;
    int num;
    int max_ = INT_MIN;
    cin >> k;
    vector<int> indices;
    for (int i = 0; i < k; i++)
    {
        cin >> num;
        max_ = max(num,max_);
        indices.push_back(num);
    }
    vector<int> sequence(max_,INT_MIN);
    int ind = 0;
    int guess = 1;
    while (ind < max_)
    {
        if (!(guess%3==0 || guess%10==3))
        {
            sequence[ind] = guess;
            ind++;
            guess++;
        }
        else
        {
            while (guess%3==0 || guess%10==3)
            {
                guess++;
            }
            sequence[ind] = guess;
            ind++;
            guess++;
        }
    }
    for (int i = 0; i < indices.size(); i++)
    {
        cout << sequence[indices[i]-1] << endl;
    }
    return 0;
}
