class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows ==1) return  {{1}} ;
        vector<vector<int>> result = {{1} , {1,1}} ;
        for(int i=1 ; i < numRows-1; i++){
            vector<int> ans ;
            ans.emplace_back(1) ;
            int sum = result[i][0]+ result[i][1] ; 
            ans.emplace_back(sum) ;
            for(int j=2 ; j <= i ; j++){
                sum+=result[i][j] ;
                sum-= result[i][j-2] ;
                ans.emplace_back(sum) ;
            }
            ans.emplace_back(1) ;
            result.emplace_back(ans) ;
        }
        return result ; 
    }
};