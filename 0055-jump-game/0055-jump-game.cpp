class Solution {
public:
    bool canJump(vector<int>& nums) {
        int val =nums[0] ;
        for(int i= 1 ; i < nums.size() ;i++){
            if(val==0) return false ; 
            val = max(nums[i] , val-1 ) ;
        }
        return true ; 
    }
};