/// brute force
#include<bits/stdc++.h>

int rob(TreeNode*root){

    if(!root) return 0;
    
    int take=root->val;

    if(root->left){

        take+= rob(root->left->left);
        take+= rob(root->left->right);

    }

    if(root->right){
         take+= rob(root->right->right);
          take+= rob(root->right->left);
    }

    int nottake= rob(root->left)+rob(root->right);


    return max(take,nottake);
}

/// recursion

unordered_map<TreeNode*, int> dp;

int rob (TreeNode*root){

    if(!root) return 0;

    if(dp.count(root)) return dp[root];


    int take=root->val;

    if(root->left){

        take+= rob(root->left->left);
        take+= rob(root->left->right);

    }
     if(root->right){
         take+= rob(root->right->right);
          take+= rob(root->right->left);
    }

    int nottake= rob(root->left)+rob(root->right);

    return dp[root]=max(take,nottake);


}


//// using optimnal


pair<int,int> dfs(TreeNode* root) {
    if (!root) return {0, 0};

    auto left = dfs(root->left);
    auto right = dfs(root->right);

    int take = root->val + left.first + right.first;
    int notTake = max(left.first, left.second) +
                  max(right.first, right.second);

    return {notTake, take};
}

int rob(TreeNode* root) {
    auto res = dfs(root);
    return max(res.first, res.second);
}


