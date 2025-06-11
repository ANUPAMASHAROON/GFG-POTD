class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        stack<int>c,r;

        int n = color.size();

        for(int i = 0;i<n;i++){

            bool flag = true;

            if(!c.empty() && color[i] == c.top() && radius[i] == r.top()){

                c.pop();r.pop();flag = false;

            }

            if(flag){

                c.push(color[i]);

                r.push(radius[i]);

            }

        }

        return c.size();
    }
};