class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size() ;
        bool exp =true ;
        int min_even = INT_MAX ;
        int min_odd =INT_MAX ;
        for(auto num : nums1){
            if(num % 2 ==0){
                min_even = min(min_even , num ) ;
            }else {
                min_odd = min(min_odd , num) ;
            }
        }
        if(min_even == INT_MAX  || min_odd == INT_MAX) return 1 ;
        
        for(auto num : nums1){
            if(num % 2 ==0){
                if(min_odd > num){
                    return 0 ; 
                }
            }
        }
        return 1 ; 
    }
};