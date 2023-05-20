543. Diameter of Binary Tree

class Solution {
public:
     int height(TreeNode*root)
     {
         if(root==NULL)
         return 0;
         int l=height(root->left);
         int r=height(root->right);
        return max(l,r)+1;
     }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
        return 0;
        int l=diameterOfBinaryTree(root->left);
        int r=diameterOfBinaryTree(root->right);
        int mix=height(root->left)+height(root->right);
        return max(mix,max(l,r));
    }
};
