class Solution {
public:


   int maxh(TreeNode*root){
    if(root==NULL){
            return true;
        }    
    int ln=maxh(root->left);
    int rn=maxh(root->right);

    return 1+max(ln,rn);

   }


    bool isBalanced(TreeNode* root) {

        if(root==NULL){
            return true;
        }
            
        bool ln=isBalanced(root->left);
        bool rn=isBalanced(root->right);
      
        bool diff = abs  (maxh(root->left) - maxh(root->right)) <=1 ;
        
        if(ln && rn && diff){
            return 1;
        }
        else {
            return false;
        }
         
    }
};
