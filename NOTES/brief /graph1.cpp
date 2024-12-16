#include<unordered_map>
#include<list>
#include<iostream>
using namespace std;

class graph {
     public:  
     unordered_map<int,list<int>  > gp;

     void addegge (int u,int v,bool direct){
         //direct 0 undirected  
         //direct 1 directed 

         // create edge from u to v
          gp[u].push_back(v);
          if(direct==0){
             gp[v].push_back(u);
          } 

     }
     void print (){
         for (auto i:gp){
            cout << i.first << "->"; 
            for(auto j:i.second){
                cout << j << " " ;
            }
            cout << endl; 

         }
     }


};



int main (){
    int n;
    cout << "enter nu of nodes";
    cin >> n;
    int m; 
    cout << "enter nu of edges";
    cin >> m;
     graph g;
      
      for(int i=0; i<m;i++){
        int u,v;
        cin >> u >> v;
        g.addegge(u,v,0); 
      }
      g.print();

}



//// BFS TRAVERSAL

/// ISME TRAVERSAL KE LIE 2 DS USE KARTE HAI EK ME STORE ADJ LIST MAP AUR EK QUEUE FOR PRINT

// queue<int> q;
// vector<int>result;
// int src=0;
// q.push(src);

// unordered_map<int,bool>visited;
// visited[src]=true;


// while(!q.empty()){
    
//     int frontnode=q.front();
//     q.pop();
//     result.push_back(frontnode);

//     for(auto n:adjlist){
//         if(!visited){
//             q.push(n);
//             visited[n]=true;

//         }
//     }
// }