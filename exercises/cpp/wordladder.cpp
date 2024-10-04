/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool singlediff(string word1, string word2)
    {
        if (word1.length() != word2.length())
        {
            return false;
        }

        bool chardiff = false;

        for (int i = 0; i < word1.length(); i++)
        {
            if (chardiff == true && word1[i] != word2[i])
            {
                return false;
            }

            if (word1[i] != word2[i])
            {
                chardiff = true;
            }
        }
        return chardiff;
    }

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        int n = wordList.size();
        int beg_word_ind = INT_MIN;
        int end_word_ind = INT_MIN;
        bool beg_word_differs_less_than_one_char = false;

        vector<bool> visited(n);
        vector<vector<int>> graph(n);

        for (int i = 0; i < n; i++)
        {
            if (wordList[i].compare(beginWord) == 0)
            {
                beg_word_ind = i;
            }

            for (int j = 0; j < n; j++)
            {
                if (wordList[i].compare(wordList[j]) != 0)
                {
                    if (singlediff(wordList[i], wordList[j]))
                    {
                        graph[i].push_back(j);
                    }
                }
            }
        }

        if (end_word_ind == INT_MIN)
        {
            return 0;
        }

        for (int i = 0; i < n; i++)
        {
            cout << wordList[i] << endl;
            for (int j = 0; j < graph[i].size(); j++)
            {
                cout << wordList[j] << " ";
            }
            cout << endl << endl;
        }
    
        vector<int> start;
        start.push_back(beg_word_ind);
        start.push_back(0);

        queue<vector<int>> q;
        q.push(start);

        visited[beg_word_ind] = true;
        while (q.size() > 0)
        {
            vector<int> front = q.front(); q.pop();

            int ind = front[0];
            int tslength = front[1]; 
            
            for (int i = 0; i < graph[ind].size(); i++)
            {
                if (visited[graph[ind][i]] == false)
                {
                    vector<int> ind_length;
                    ind_length.push_back(graph[ind][i]);
                    ind_length.push_back(tslength+1);
                    q.push(ind_length);
                    visited[graph[ind][i]] = true;
                    if (wordList[graph[ind][i]].compare(endWord))
                    {
                        return tslength+1;
                    }
                }
            }
        }
        return 0;
    }
};
