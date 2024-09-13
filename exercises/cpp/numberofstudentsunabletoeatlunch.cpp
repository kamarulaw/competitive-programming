/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 1 of 55 */
/* not sure whats going on...seems like a correct solution to me */ 
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int studentsandwichsum = 0;
        int numberofstudents = students.size();

        stack<int> sds;
        for (int i = sandwiches.size()-1; i >= 0; i--)
        {
            sds.push(sandwiches[i]);
            studentsandwichsum += sandwiches[i];
        }
        
        while (sds.size() > 0 && 
        ((sds.top() == 1 && studentsandwichsum > 0) || (sds.top() == 0 && studentsandwichsum != numberofstudents)))
        {
            if (students[0] == 0 && sds.top() == 0)
            {
                sds.pop(); 
                students.erase(students.begin() + 0);
                numberofstudents--;
            }
            else if (students[0] == 1 && sds.top() == 1)
            {
                sds.pop(); 
                students.erase(students.begin() + 0);
                numberofstudents--;
                studentsandwichsum--;
            }
            else 
            {
                students.push_back(students[0]);
                students.erase(students.begin() + 0);
            }
        }
        return students.size();
    }
};
