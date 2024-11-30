/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countSymmetricIntegers(int low, int high) 
    {
        int sol = 0;
        for (int num = low; num <= high; num++)
        {
            int numlength = to_string(num).length();
            int num_ = num;
            int fhsum = 0;
            int shsum = 0;
            int counter = 0;
            if (numlength % 2 == 0)
            {
                while (counter < numlength / 2)
                {
                    fhsum += (num_ % 10); counter++; num_ /= 10;
                }
                while (counter < numlength)
                {
                    shsum += (num_ % 10); counter++; num_ /= 10;
                }
                if (fhsum == shsum)
                {
                    sol++;
                }
            }
        }
        return sol; 
    }
};
