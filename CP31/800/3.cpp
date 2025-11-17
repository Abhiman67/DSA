#include<bits/stdc++.h>
using namespace std ;

int main (){

    int t;
    cin >> t ;

    while(t--){

    
        int n ;
        cin >> n;

        string s;
        cin >> s;

      int minop=0;
      bool flag=false;


      for(int i=0;i<n-2;i++){

        if (s[i]=='.'&& s[i+1]=='.'&& s[i+2]=='.'){

            flag=true;
            
           }

        else {
            
            if (s[i]=='.'){
                minop++;
            }
        }


      }

      if(!flag) {
         
        if(s[n-2]=='.') minop++;
        if(s[n-1]=='.') minop++;
      }

      if (flag ) cout  << 2 << endl ;

      else cout << minop << endl;


      
    }


    return 0;
}