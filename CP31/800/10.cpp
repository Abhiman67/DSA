#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;


    while (t--){


        int a[10][10];


        for(int i=0;i<10;i++){

            for(int j=0;j<10;j++){

                cin>> a[i][j];
            }
        }


        int sum=0;
         for(int i=0;i<10;i++){

            for(int j=0;j<10;j++){

                // outer ring 1

                if(a[0][j]=="X" || a[9][j]=="X" ||a[9][j]=="X" || a[0][j]=="X" || a[j][0]=="X"){

                    sum+=1;
                }

                // outer ring 2

                 if(a[1][j]=="X" || a[8][j]=="X" ||a[8][j]=="X" || a[1][j]=="X" || a[j][1]=="X"){



                    sum+=2;
                }


                 if(a[2][j]=="X" || a[7][j]=="X" ||a[7][j]=="X" || a[2][j]=="X" || a[j][2]=="X"){



                    sum+=3;
                }

                if(a[3][j]=="X" || a[6][j]=="X" ||a[6][j]=="X" || a[3][j]=="X" || a[j][3]=="X"){



                    sum+=4;
                }
                if(a[4][j]=="X" || a[5][j]=="X" ||a[5][j]=="X" || a[4][j]=="X" || a[j][4]=="X"){



                    sum+=5;
                }
                

                
            }
        }


        cout << sum << endl;
    }


    return 0;
}