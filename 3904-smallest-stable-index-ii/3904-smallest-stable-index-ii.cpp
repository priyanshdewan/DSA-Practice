class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=  nums.size() ;
        vector<int> maxprefix(n) ;
        vector<int> minsuffix(n) ; 
        maxprefix[0] = nums[0] ;
        minsuffix[n-1] = nums[n-1] ;
        int maxi= nums[0] , mini =nums[n-1] ;
        for(int i= 1 ; i < n ; i++){
            maxi  = max(nums[i] , maxi ) ;
            mini = min(nums[n-i-1] , mini) ;
            maxprefix[i] = maxi ; ;
            minsuffix[n-i-1] = mini;
        }
        for(int i= 0 ; i<n ; i++){
            int diff = maxprefix[i] - minsuffix[i] ;
            if(diff <= k){
                return i ;
            }
        }
        return -1 ; 
    }
};