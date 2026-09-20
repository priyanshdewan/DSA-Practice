class Solution {
public:
    int reverseDegree(string s) {
        int n= s.size() ;
        int result  = 0 ; 
        for(int i =0 ; i<n ; i++){
            cout << abs(s[i] - 'z') +1;
            int val = (abs(s[i] - 'z') +1 )*  (i+1) ;
            result += val ;
        }
        return result  ;
    }
};