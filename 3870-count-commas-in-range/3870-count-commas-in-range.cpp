class Solution {
public:
    int countCommas(int n) {
      
      if(n >=1000){
        if(n <2000){
            return n%1000 +1 ;
        }
        return n+1 -1000 ;
      }
    return 0 ;
    }
};