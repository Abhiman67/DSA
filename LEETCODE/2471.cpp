/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minswap(vector<int> &res){
        int swaps =0;
        vector<int>sorted(begin(res),end(res));

        sort(begin(sorted),end(sorted));
        unordered_map<int,int>mp;
        for(int i=0;i< res.size();i++){
             mp[res[i]]=i;
        }
        for(int i=0;i<res.size();i++){
            if(res[i]==sorted[i]) continue ;
            
            int crntidx= mp[sorted[i]];
            mp[res[i]]=crntidx;
           swap(res[crntidx],res[i]);
             swaps ++;

        }
        return swaps;

    }



    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
       int result=0;


        while(!q.empty()){

            int n =q.size();
            vector<int>res;
            while(n--){
                TreeNode*temp=q.front();
                q.pop();
                res.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }



            }

            result +=minswap(res);

        }
        return result ;
        
    }
};
