class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1 ){
            return nums.size();
        }
        sort(nums.begin() , nums.end()) ;
        int maxi = 1;
        int cur = nums[0] ;
        int len = 1; 
        for(int i= 0 ; i < nums.size()-1 ; i++){
            if(nums[i+1] - nums[i] ==1){
                len++ ; 
            }
            else if(nums[i+1] - nums[i] < 1){
                continue ;
            }else{
                len =1  ; 
            }
            maxi =max(len , maxi) ;
            
        }
        return maxi ; 
    }
};