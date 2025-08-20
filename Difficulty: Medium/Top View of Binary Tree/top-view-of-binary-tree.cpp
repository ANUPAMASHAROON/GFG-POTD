class Solution {
  public:

vector<int> topView(Node *root) {
        // code here

         queue<pair<Node*, int> > q;
                map<int, int> mp;

          q.push({root, 0});

          while(!q.empty()){

            Node* temp = q.front().first;

             int lvl = q.front().second;

q.pop();
            if(temp){

              if(!mp.count(lvl))
                    mp[lvl] = temp->data;

                              if(temp->left)
                    q.push({temp->left, lvl-1});

                    if(temp->right)
                    q.push({temp->right, lvl+1}); 

                   }else {
                q.push({NULL,0});

                               if (!q.front().first) 
                    break;

}

}

                         vector<int> ans;
                     for(auto i : mp)

                 ans.push_back(i.second);

                      return ans;
            }

};