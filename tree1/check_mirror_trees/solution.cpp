101. Symmetric Tree


class Solution {
public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
          return true;
        else if(p!=NULL && q==NULL )
          return false;
        else if(q!=NULL && p==NULL)
          return false;

        bool l= isSameTree(p->left, q->right);
        bool r= isSameTree(p->right, q->left);
        if(l==true && r==true && p->val==q->val)
        return true;
        else
        return false; 
    }
    bool isSymmetric(TreeNode* root) {
         
         return isSameTree(root->left,root->right);
    }
};
