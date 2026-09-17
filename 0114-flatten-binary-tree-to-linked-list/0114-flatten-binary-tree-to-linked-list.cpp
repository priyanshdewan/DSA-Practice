/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    stack<TreeNode*> stk ; 
    void pushstack(TreeNode* root){
        if(root == nullptr) return ; 
        stk.push(root) ;
        pushstack(root->left) ;
        pushstack(root -> right) ;
    }
    void flatten(TreeNode* root) {
       pushstack(root) ;
       TreeNode* head = nullptr  ;
       TreeNode* temp = nullptr ;
        while(!stk.empty()){
            temp =head ; 
            head = stk.top() ;
            head -> right = temp ; 
            head ->left = nullptr ;
            stk.pop();
        }
        root = head ; 
    }
};