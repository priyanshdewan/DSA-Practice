class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999){
            return 0 ;
        }
        long long comma = 0 ;
        long long  count = 1000 ;
        while(n >=count){
            comma += (n- count +1) ;
            count *=1000 ;
        }
        return comma ;
    }
};