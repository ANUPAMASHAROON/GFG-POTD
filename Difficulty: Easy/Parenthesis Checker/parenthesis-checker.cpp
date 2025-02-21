//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        int l = s.size();
        
        for(int i=0;i<l;i++){
            if(s[i] == ')' || s[i] == '}' || s[i] ==']' ){
                if(st.empty()) 
                    return false;
                    
                char t = st.top();
                
                if(t == '(' && s[i] ==')') 
                    st.pop();
                else if(t == '{' && s[i] =='}') 
                    st.pop();
                else if(t == '[' && s[i] ==']') 
                    st.pop();
                else
                    return false;
            }
            else{
                st.push(s[i]);
            }
            
        }
        
        if(!st.empty()) return false;
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends