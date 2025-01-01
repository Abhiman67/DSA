class Solution {

  int result=INT_MIN;
  int n=s.length();

   int totalone= count(begin(s),end(s),'1');
   
   int zero=0;
   int one=0;

   /// for left side
   for(int i=0;i<=n-2;i++){

       if(s[i]=='1') one++;
       else zero ++;

        int  rightones=totalone-one;
   }
};