class Solution {
public:
    bool isPalindrome(string s) {
        string str = "" ;
        for(auto ch : s){
            if(isalpha(ch) or isdigit(ch)){
                str+=tolower(ch) ;
            }
        }
        int left = 0 , right = str.size() -1 ;
        while(left <= right){
            if(str[left++]!= str[right--]){
                return false ;
            }
        }
        return true ; 
    }
};