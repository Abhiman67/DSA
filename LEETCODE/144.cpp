// // for preorder traversal 
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int d){
//         data = d;
//         left = right = NULL;
//     }
//     Node(){
//         delete left;
//         delete right;
//     }
// };
// vector<int> inorderTraversal(Node* root) {
//         vector<int> result; 
//         inorderStore(root, result); 
//         return result;  
// }

// void inorderStore(Node* root, vector<int>& result) {
//         if (root == NULL) {
//             return; 
//         }


//         inorderStore(root->left, result);

//         result.push_back(root->data);

//         inorderStore(root->right, result);
// }
// Node* input(Node* root, int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }
//     if(root->data > data){
//         root->left = input(root->left, data);
//     }
//     else root->right = input(root->right, data);

// }
// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5 ,6 , 7};
//     Node* root = NULL;
//     for(auto i:arr){
//         root = input(root, i);
//     }
//     preOrder(root);
// }


class Solution {
    public:
    vector<int>preorderTraversal(TreeNode*root){
        vector<int> result;
        preorder(root,result);
        return result ;

    }
    void preorder(TreeNode*root,vector<int>&result){
        if(root==NULL){
            return ;
        }
        result.push_back(root->val);

        preorder(root->left,result);
        
        preorder(root->right,result);

    }
};