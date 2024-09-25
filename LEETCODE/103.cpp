class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>result;
       
       queue<TreeNode*>q;
       if(root==NULL){
        return result;
       }

       
       bool lefttoright=true;
       q.push(root);

       while(!q.empty()){
        int size=q.size();
        vector<int>ans(size);

        for(int i=0;i<size;i++){
            
        TreeNode*frontnode=q.front();
        q.pop();
        int index;
        if(lefttoright){
             index=i;
        }
        else{
             index=size-1-i;
        }
        ans[index]=frontnode->val;

        if(frontnode->left){
            q.push(frontnode->left);
        }
        if(frontnode->right){
            q.push(frontnode->right);

        }

        }
       result.push_back(ans);
        lefttoright=!lefttoright;}
        return result;

       }
};