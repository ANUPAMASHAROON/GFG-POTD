//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
int c=0;
    int evenlyDivides(int N){
        int p=N;
        while(N>0)
        {
            int y=N%10;
            if(y!=0) 
            if(p%y==0)
            {
                c+=1;
            }
            N=N/10;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends