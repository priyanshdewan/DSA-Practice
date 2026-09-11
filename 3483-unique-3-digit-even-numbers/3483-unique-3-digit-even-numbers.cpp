class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n= digits.size() ;
        unordered_map<int, int> mp ; 
        int count = 0  ;
        for(int i= 0 ; i < n ; i++){
            for(int j= 0 ; j <n ; j++){
                for(int k= 0 ; k < n ; k++){
                    if(i !=j  && 
                       j !=k &&
                       k !=i
                    ){
                        int val = digits[i] *100 + digits[j]*10 + digits[k] ;
                        
                        if(val %2 == 0 && mp.find(val) == mp.end() && val >=100){
                           
                            count++ ;
                            mp[val]++ ;
                        }
                    
                    }
                }
            }
        }
        return count ; 
    }
};