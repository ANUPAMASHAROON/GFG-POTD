class Solution {
  public:
    bool solve(Node*& r1,Node*& r2)
    {
        if(r1==nullptr and r2==nullptr)return true;
        if(r1==nullptr and r2)return false;
        if(r1 and !r2)return false;
        if(r1->data!=r2->data)return false;
        bool left =  solve(r1->left,r2->left);
        bool right = solve(r1->right,r2->right);
        return left & right;
    }
    bool isIdentical(Node* r1, Node* r2) 
    {
        return solve(r1,r2);
    }
};

