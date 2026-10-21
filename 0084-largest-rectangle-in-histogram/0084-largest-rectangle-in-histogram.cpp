class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size() ;
        int mx = 0 ;
        stack<int> stk ; 
        for(int i= 0 ; i < n ; i++){
            while(!stk.empty() && heights[stk.top()] >= heights[i]){
                int x= stk.top() ;
                stk.pop() ;
                if(!stk.empty()) mx = max(mx , heights[x]* (i - stk.top() -1)) ;
                else mx = max(mx , heights[x] *i) ;
            }
            stk.push(i) ;

        }
        while(!stk.empty()){
            int x= stk.top() ;
            stk.pop() ;
           if(!stk.empty()) mx = max(mx , heights[x] *(n - stk.top() -1)) ; 
           else mx = max( mx , heights[x] * n ) ;
        }
        return mx ; 
    }
};