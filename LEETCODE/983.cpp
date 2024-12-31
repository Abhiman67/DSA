class Solution{

int Solve()
   
   // 1day pass

   int cost1= costs[0]+solve[i+1];


   // 7 days

   int maxday = days[i]+7;

   int j=i;

   while(days[j]<maxday){
     j++;
   } 
   int cost7 = costs[1]+solve[i+j];

    

};
