class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26] = {0} ,  upper[26] ={0}; //store all 26 alphabate here  and put the value initially 0
          int count  =0;


          for(char ch : word){
             if(islower(ch)) lower[ch-'a'] =1;
             if(isupper(ch)) upper[ch-'A']=1;
          }


          for(int i =0 ;i<26 ;i++){
            if(lower[i] && upper[i]) count++;
          }

return count;
        

    }
};