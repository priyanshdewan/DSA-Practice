class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> result(n, 0) ;
        for(auto &booking : bookings){
            for(int i = booking[0]-1 ; i <= booking[1]-1 ; i++){
                result[i]+= booking[2] ;
            }
        }
        return result ; 
    }
};