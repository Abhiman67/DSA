/// recursive +memo / tabulation way
class Solution {
public:
int M =1e9+7;
vector<int>t;



int solve(int n, int delay, int forget){

    int res=0;
    if(n==0) return 0;
    if(n==1) return 1;

    if(t[n]!=-1) return t[n];


    for(int i=n-forget+1; i<=n-delay;i++){

        if (i>0){

             res=(res+solve(i,delay,forget)) % M;
        }
    }

    return t[n]= res;

}
    int peopleAwareOfSecret(int n, int delay, int forget) {
        
        t.assign(n+1,-1);
        int ans=0;
        for(int j=n-forget+1;j<=n;j++){

            if(j>0){

                 ans=(ans+solve(j,delay,forget)) % M; 
            }
           
        }

        return ans;

    }
};