/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head == nullptr) return head ; 
        ListNode*  temp = head ; 
        ListNode* dummy = new ListNode(-1) ;
        int size= 0 ; 

        while(temp){
            temp = temp -> next ; 
            size++ ; 
        }
        k= k % size ;
        if(k==0) return head ; 
        temp = head ; 
        for(int i= 0 ; i < size-k-1 ; i++){
            temp = temp-> next ; 
        }

        ListNode* temp1 = temp-> next ;
        ListNode* temp2 = temp1 ; 

        dummy -> next = temp1 ; 
        temp -> next = nullptr ; 
        if(temp2 == nullptr){

            dummy -> next = head ; 

        }else{
            while(temp2 -> next != nullptr && temp2 != nullptr){
                temp2 = temp2 -> next ; 
            }
            temp2 -> next = head ; 
        }
        dummy -> next = temp1 ; 

        return dummy -> next  ; 
    }
};