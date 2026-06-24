class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string> mp(m, string(n, '#')); 


        for(int i=0;i<n;i++){

            mp[0][i]='.';
        }

        for(int i=0;i<m;i++){

            mp[i][n-1]='.';
        }

    

        return mp;
    }
};