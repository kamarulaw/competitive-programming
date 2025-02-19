/* SOLUTION 1 */
/* All tests passed */
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        /*
        vector<int> seq1;
        vector<int> seq2;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (j%2==0)
            {
                seq1.push_back(num);
            }
            else
            {
                seq2.push_back(num);
            }
        }
        int ss2 = seq2.size(); 
        bool ss2_ = ss2 >= n-ss2 ? true : false;
        for (int j = 0; j < seq2.size() / 2; j++)
        {
            int tmp = seq2[j];
            seq2[j] = seq2[ss2-1-j];
            seq2[ss2-1-j] = tmp;
        }
        for (int j = 0; j < n-ss2; j++)
        {
            cout << seq1[j] << " ";
        }
        for (int j = 0; j < ss2; j++)
        {
            cout << seq2[j] << " ";
        }
        cout << endl;
        */
        vector<int> seqb(n,0);
        vector<int> initialsequence;
        for (int j = 0; j < n; j++)
        {
            cin >> seqb[j];
        }
        int ptr1 = 0;
        int ptr2 = n-1;
        while (ptr1 <= ptr2)
        {
            if (ptr1 < ptr2)
            {
                initialsequence.push_back(seqb[ptr1]);
                initialsequence.push_back(seqb[ptr2]);
                ptr1++;
                ptr2--;
            }
            else 
            {
                initialsequence.push_back(seqb[ptr1]);
                ptr1++;
                ptr2--;
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << initialsequence[j] << " ";
        }
        cout << endl;
    }
}
