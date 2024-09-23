#include<iostream>
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



/// 
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