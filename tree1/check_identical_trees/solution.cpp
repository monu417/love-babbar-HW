100. Same Tree

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
          return true;
        else if(p!=NULL && q==NULL )
          return false;
        else if(q!=NULL && p==NULL)
          return false;

        bool l= isSameTree(p->left, q->left);
        bool r= isSameTree(p->right, q->right);
        if(l==true && r==true && p->val==q->val)
        return true;
        else
        return false; 
    }
};
