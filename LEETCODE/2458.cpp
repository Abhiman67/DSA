#include<iostream>
using namespace std;

class Solution {
public:

     int level[10000];
     int height[100000];
     int lvlmaxht[100000];
     int lvlscmax[100000];


     int Findheight(TreeNode*root,l){
         if(!root) return 0;

         level[root->val]=l;    

          height[root->val]= max(Findheight(root->left,l+1),Findheight(root->right,l+1)+1);


          if(lvlmaxht[l]<height[root->val]){
              lvlscmax[l]=lvlmaxht[l];
              lvlmaxht[l]=height[root->val];
          }
          else if (lvlscmax[l]<height[root->val]){
            lvlscmax[l]=height[root->val];     
          }

          return height[root->val];

        }

 
    
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
          vector<int>result;

           Findheight(root,0);
           // node woh hai jo delete krni hai

           for(int &node : queries){

             int L=level[node];

             int tempresult= L+ (lvlmaxht[L]==height[node] ? lvlscmax[L] : lvlmaxht[L] ) -1 ;

             result.push_back(tempresult);

           } 
           return result ;

          
    }
};