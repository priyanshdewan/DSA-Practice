class Solution {
public:
    int longestMountain(vector<int>& arr) {
         int left = 0 , right =0 ;
        int n= arr.size() ;
        int len = 0 ;
        for(int i=1 ; i <n-1 ; i++){
           if( arr[i] > arr[i-1] && arr[i] > arr[i+1]){

            left = i-1 ; 
            right = i+1 ;
            while(left >0 && arr[left] > arr[left-1]){
                left-- ;
            }
            while( right < n-1 && arr[right] > arr[right+1]){
                right++ ;
            }
            len = max(len , right-left +1 ) ;
           }
        
        }
     return len ;
    }
};