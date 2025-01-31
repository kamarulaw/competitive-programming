/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    vector<int> nums;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    cout << nums[3] - nums[0] << " " << nums[3] - nums[1] << " " << nums[3] - nums[2] << endl;
    return 0;
}
