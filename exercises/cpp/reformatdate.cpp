/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reformatDate(string date) 
    {
        reverse(date.begin(), date.end());
        string year = date.substr(0,4); 
        reverse(year.begin(), year.end());
        string month = "";
        int ind = 5;  
        while (ind < date.length() && date[ind] != ' ')
        {
            month += date[ind]; 
            ind++;
        }   
        reverse(month.begin(), month.end());
        reverse(date.begin(), date.end());
        string day = "";
        ind = 0;
        while (ind < date.length() && 0 <= date[ind] - '0' && date[ind] - '0' <= 9)
        {
            day += date[ind];
            ind++;
        }
        string sol = year; 
        map<string,string> m;
        m["Jan"] = "01";
        m["Feb"] = "02";
        m["Mar"] = "03";
        m["Apr"] = "04";
        m["May"] = "05";
        m["Jun"] = "06";
        m["Jul"] = "07";
        m["Aug"] = "08";
        m["Sep"] = "09";
        m["Oct"] = "10";
        m["Nov"] = "11";
        m["Dec"] = "12";
        sol += '-'; sol += m[month];
        sol += '-'; 
        if (day.length() == 1)
        {
            sol += '0'; 
        }
        sol += day; 
        return sol.substr(0,10); 
    }
};
