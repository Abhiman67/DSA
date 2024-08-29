#include<iostream>
#include<stack>
using namespace std;
///stl
// int main(){
// stack<int>s1;
// s1.push(5);
// s1.push(6);
// cout << s1.top() << endl;
// cout << s1.size();
// }

/// class
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int [size];
        top=-1;

  }

  void push(int a){
    if(size-top>1){
        top++;
        arr[top]=a;

    }
    else cout << "stack is overflow";

  }
  void pop(){
    if(top>=0){
        top--;

    }
  }

   int peek() {
    if (top>=0){
        return arr[top];
    }
    else {
        cout << "stack is empty";
        return -1;
    }
   }





};

int main(){
    Stack st(5);
    st.push(5);
    st.push(6);;
    st.push(7);
    
    st.pop();
    cout<< st.peek();
} 

/// delete middle element
void Solve(stack<int>&inputstack,int count,int size){
    if(count==size/2){
        inputstack.pop();
        return;
    }
    int num=inputstack.top();
    inputstack.pop();
    Solve(inputstack,count+1,size);
    inputstack.push(num);


}
/// VALID PARENTHESIS 

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>s;
//         for(int i=0;i<s.length;i++){
//             char ch= s[i];
//             if(ch=='{'|| ch=='['|| ch=='('){
//                 s.push(ch);
                              
//             }
//             else{
//                 if(!empty()){
//                     char top= s.top();

//                     if( (ch == ')' && top == '(') || 
//                      ( ch == '}' && top == '{') || 
//                      (ch == ']' && top == '[') ) {
//                       s.pop();)
//                 }
//                 else {
//                     return false;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }    
//         }
//          if(s.empty()){
//             return true;
//         }
//         else return false ;
//     };
