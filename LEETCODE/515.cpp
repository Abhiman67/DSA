/// DFS SOLN
class Solution {
public:
            vector<int>result;


      void  dfs(TreeNode*root,int depth){

        if(root==NULL) return  ;

        if(depth==result.size()) {
            result.push_back(root->val);
        }
        else{
            result[depth]=max(result[depth],root->val);
        }
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);


    }
    vector<int> largestValues(TreeNode* root) {
 
    dfs(root,0);     
    return result;

     }
    };

//// BFS
   // bfs    
    //    if(root==NULL) return {}; 
    //    queue<TreeNode*>q;
    //    q.push(root);

    //    vector<int>result;

    //    while(!q.empty()){
    //    int n=q.size();
    //    int maxel= INT_MIN;


    //     while(n--){
               
    //         TreeNode*temp=q.front();
    //         q.pop();
    //         maxel=max(maxel,temp->val);
    //         if(temp->left) q.push(temp->left);
    //         if(temp->right) q.push(temp->right);
        
    //          }

    //          result.push_back(maxel); 
     //    return result;
