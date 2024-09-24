class Solution {
public:
 int m=0;
       int height(TreeNode*root){
            if(root==NULL){
                return 0;
            }
           
            int ln=height(root->left);
            int rn=height(root->right);
            m=max(m,ln+rn);
            return 1+max(ln,rn);
        }
    int diameterOfBinaryTree (TreeNode*root){
     
     
           height(root);
           return m;
    }
};