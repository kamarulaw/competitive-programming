/* SOLUTION 1 */ 
/* WRONG ANSWER ON TEST CASE 7 of 65 */
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        vector<pair<int,int>> queue_;

        for (int i = 0; i < tickets.size(); i++) 
        {
            pair<int,int> temp;
            temp.first = tickets[i]; 
            temp.second = i;
            queue_.push_back(temp);
        }

        cout << queue_.size() << endl << endl; 

        int timetaken = 0;

        bool kthindhaselements = true;
        
        while (kthindhaselements == true)
        {
            pair<int,int> curr = queue_[0];

            timetaken++;
            curr.first--;
            cout << curr.first << " : " << curr.second << endl << endl; 
            queue_.push_back(curr);
            queue_.erase(queue_.begin() + 0);

            if (curr.first == 0 && curr.second == k)
            {
                kthindhaselements = false; 
            }
        }
        return timetaken; 
    }
};
