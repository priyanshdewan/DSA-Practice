class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(auto &num : nums){
            if(num <0) num *=-1 ;
        }
        sort(nums.begin() , nums.end()) ;
        int n= nums.size() ;
        long long sum  =0 ;
        cout << n/2 ;
        for(int i= 0; i < n/2 ;  i++){
            sum +=( nums[n-i-1] * nums[n-i-1]) ;
            sum -= (nums[i] * nums[i]) ;
        }
        if(n%2 ==1){
            sum += (nums[n/2] * nums[n/2]) ;
        }
      

        return sum ; 
    }
};