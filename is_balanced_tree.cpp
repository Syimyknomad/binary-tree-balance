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
 #include <iostream>
 #include <string>
 using namespace std;

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHight(root) != -1;
    }
private:
    int checkHight(TreeNode* node){
        if (!node)return 0;
        int leftHeight = checkHight(node->left); 
        if (leftHeight == -1) return -1;
        int rightHeight = checkHight(node->right);
        if (rightHeight == -1 ) return -1;

        if (abs(leftHeight - rightHeight)>1)return -1;

        return  max(leftHeight, rightHeight)+1;
    }
};
