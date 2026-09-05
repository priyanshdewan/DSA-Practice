class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=  nums.size() ;
        vector<int> minsuffix(n) ; 

        minsuffix[n-1] = nums[n-1] ;
        int maxi= nums[0] , mini =nums[n-1] ;

        for(int i= n-1 ; i >=0 ; i--){
            mini = min(nums[i] , mini) ;
            minsuffix[i] = mini;
        }
        for(int i= 0 ; i<n ; i++){
            maxi = max(maxi , nums[i]) ;
            int diff =maxi- minsuffix[i] ;
            if(diff <= k){
                return i ;
            }
        }
        return -1 ; 
    }
};