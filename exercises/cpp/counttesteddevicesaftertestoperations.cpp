/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) 
    {
        int testeddevices = 0;
        int n = batteryPercentages.size();
        for (int i = 0; i < n; i++)    
        {
            if (batteryPercentages[i] > 0)
            {
                testeddevices++;
                for (int j = i+1; j < n; j++)
                {
                    batteryPercentages[j] = max(0,batteryPercentages[j]-1);
                }
            }
        }
        return testeddevices;
    }
};
