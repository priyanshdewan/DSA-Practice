class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1 ){
            return nums.size();
        }
        sort(nums.begin() , nums.end()) ;
        map<int, int> mp ;
        for(auto num : nums){
            mp[num]++ ;

        }
        int maxi = 0 ;
        int cur = nums[0] ;
        int len = 1; 
        for(int i= 0 ; i < nums.size()-1 ; i++){
            if(nums[i+1] - nums[i] ==1){
                len++ ; 
                maxi =max(len , maxi) ;
            }
            else if(nums[i+1] - nums[i] <1){
                maxi =max(len , maxi) ;
                continue ;
            }else{
                maxi =max(len , maxi) ;
                len =1  ; 
            }
        }
        return maxi ; 
    }
};