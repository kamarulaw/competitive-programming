class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
      int n = emails.size(); 
      set<string> es; 
      string email = "";
      string newemail = ""; 
      vector<string> locals; 
      vector<string> domains; 
      for (int i = 0; i < n; i++) { 
        email = emails[i];
        newemail = "";
        bool hitat = false;
        for (int j = 0; j < email.length(); j++) { 
          if (hitat == true) { 
            locals.push_back(newemail);
            break; 
          }
          
          if (email[j] == '.') {
            continue; 
          } else if (email[j] == '+' || email[j] == '@') { 
            hitat = true; 
          } else { 
            newemail += email[j];
          }
        }
      }
      
      for (int i = 0; i < emails.size(); i++) { 
        email = emails[i];
        newemail = "@";
        bool hitat = false; 
        for (int j = 0; j < email.length(); j++) { 
          if (email[j] == '@') {
            hitat = true; 
            continue;  
          }
          
          if (hitat == false) { 
            continue; 
          } else { 
            newemail += email[j];
          }
        }
        domains.push_back(newemail);
      } 
      
      for (int i = 0; i < emails.size(); i++) { 
        es.insert(locals[i] + domains[i]);
      }
      return es.size(); 
    }
};