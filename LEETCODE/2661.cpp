class Solution {
public:
/// BF APPROACh

//    bool checkrow( vector<vector<int>>& mat,int row){
         
//            for(int col=0;col<mat[0].size();col++){
//             if( mat[row][col]>0){
//                 return false;
//             }
//            }
//            return true;

//    }

//    bool checkcol( vector<vector<int>>& mat,int col){
         
//            for(int row=0;row<mat.size();row++){
//             if( mat[row][col]>0){
//                 return false;
//             }
//            }
//            return true;
           
//    }
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
      
      int m=mat.size();
      int n=mat[0].size();


        unordered_map<int, pair<int,int>> mp;

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                 int val= mat[i][j];
                 mp[val]={i,j};

            }
        }
        vector<int>rowcount(m,0);
        vector<int>colcount(n,0);

        for(int i=0;i<arr.size();i++){

            int val=arr[i];
            auto[row,col]=mp[val];

            rowcount[row]++;
            colcount[col]++;

            if(rowcount[row]==n || colcount[col]==m){
                return i;
                 
            }
        }
          return -1;
    }
};