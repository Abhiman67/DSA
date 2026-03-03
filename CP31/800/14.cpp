#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;

    cin >> t;

    while(t--){

        long long a,b,c;
        cin >> a >> b >> c ;

        if(c%2==0) {
            
            if(a<=b) {
                cout << "Second" << endl;
                
            }
            else {
                cout << "First" << endl;
               
            }
        }

      else {

            if(a>=b){
                cout << "First" << endl;
                

            }
            else {
                cout << "Second" << endl;
               
            }
        }

        
    }

    return 0;
}