class Solution {
public:
    string sortVowels(string s) {
        vector<char>store;
        

        for(char c : s){
            
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
               c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
             store.push_back(c);   
            }
        }

        sort(store.begin(),store.end());

     int j=0;

     vector<char>ans;

        for(int i=0;i<s.size();i++){

           
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
               s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){

            ans.push_back(store[j++]);


            }

            else{
                ans.push_back(s[i]);
            }


        }

        return string(ans.begin(),ans.end());
    }
};