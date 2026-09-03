class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size() ;
        bool exp =true ;
        int oddcc = 0, evencc =0 ;
        int mini =INT_MAX ;
        for(auto num : nums1){
            mini = min(mini , num) ;
            if(num %2 ==1){
                oddcc++ ;
            }else{evencc++  ;}
        }
        if(evencc ==n || oddcc==n){
            return true ;
        }
        int parity ;
        if(evencc >= oddcc){
            parity =0 ;
        }else{
            parity =1 ;
        }
        for(int i= 0 ; i < n ; i++){
            if(nums1[i] % 2 != parity  ){
                if((nums1[i] -mini) %2 !=parity){
                    exp = false ;
                    return exp ;
                }
            }
        }
        return exp ; 
    }
};