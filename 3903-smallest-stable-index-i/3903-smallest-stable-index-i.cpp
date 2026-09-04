class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
      
        int stableIdx =  INT_MAX ;
        int maxi = nums[0] ;
        int mini ;
        int diff ; 
       
        for(int i= 0 ; i < nums.size()  ; i++ ){
            maxi = max( maxi , nums[i]);
            mini = *min_element(nums.begin() +i , nums.end() ) ;
            diff = maxi -mini ; 
            if(diff <= k ){
                stableIdx = i ; 
                return stableIdx ;
            }
        }
        if(stableIdx == INT_MAX){
            return -1 ;
        }
        return stableIdx ; 
    }
};