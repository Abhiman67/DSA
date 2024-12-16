 #include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};

Node*buildtree (Node*root){

    cout << "enter the data "; 
    int data;
    cin >> data;
    root =new Node (data);

    if(data==-1){
        return NULL;  
    }
     cout<< "ENTER DATA FOR LEFT " << endl ;
        root->left=buildtree(root->left);
        cout << "ENTER DATA FOR RIGHT " << endl ;
        root->right=buildtree(root->right);
        return root ;
        }

/// traversal through recursion         

void levelordertraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    while (!q.empty()){
        
        Node*temp=q.front();
        q.pop();

        if(temp==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
                }
        }

        else {
            
            cout<< temp->data << " ";

            if(temp->left){
            q.push(temp->left);
            }
            
            if(temp->right){
            q.push(temp->right);
            }

            }
        
     }


  }       


/// through recursive method 

void inordertraversal (Node*root){
    if(root==NULL) {
        return ;}

    inordertraversal(root->left);
    cout << root ->data << " ";   
    inordertraversal(root->right);

}
 
void preordertraversal (Node*root){
    if(root==NULL) {
        return ;}

    cout << root ->data << " ";    
    preordertraversal(root->left);
    preordertraversal(root->right);

}

void postordertraversal (Node*root){
    if(root==NULL) {
        return ;}
 
     postordertraversal(root->left);
     postordertraversal(root->right);
      cout << root ->data << " ";   

}


/// through iterative way
void iterativeInOrder(Node* root) {
    stack<Node*> s;
    Node* curr = root;

    while (curr != nullptr || !s.empty()) {
        // Traverse to the leftmost node and push all left nodes onto the stack
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        // Node at the top of the stack is the leftmost node, so we visit it
        curr = s.top();
        s.pop();
        cout << curr->data << " ";  // Print the node value (in-order step)

        // Now we need to process the right subtree
        curr = curr->right;
    }
}


///  BUILD LEVEL WISE TREE 

void BuildLevelOrder (Node*root){
    queue<Node*>q;
    
    int data;
    cout << "enter root data";
    cin >> data ;
    root= new Node(data);
    q.push(root);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();

        cout << "enter data for left node ";
        int leftdata;
        cin>> leftdata;
        if(leftdata!=1){
            temp->left=new Node (leftdata);
            q.push(temp->left);
        }
                
        cout<< "enter data for right" ;
        int rightdata;
        cin >> rightdata;
        if(rightdata!=1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
 

    }


}



/// diameter of BT
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


/// FIND MAX HEIGHT OF TREE 

int  maxheight(Node*root){

    if (root==NULL) return ;


    int ln=maxheight(root->left);
    int rn=maxheight(root->right);

    return 1+max(ln,rn);



}


/// TREE BALANCED OR NOT

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


/// TREE ARE IDENTICAL 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL&&q==NULL){
            return true;
        }
        
        if (p==NULL || q==NULL ){
            return false;
        }
        
        if(p->val==q->val){
            
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        else {
            return false;
        }
    }
};

/// zig zag or spiral traversal
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
int main (){
    Node*root=NULL;

    /// creating a tree 
    root=buildtree(root); 

    // 1 3 7 -1 -1  11 -1 -1 5 17 -1 -1 -1
  
    //// level order 
    //levelordertraversal(root);
    
    inordertraversal(root);
    cout << endl ;
    preordertraversal(root);
    cout << endl ;
    postordertraversal(root);
    cout << endl ;

    BuildLevelOrder(root);
   
    return 0;

}   