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
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            TreeNode *node = st.top();
            st.pop();
            
            if(node == nullptr) {
                continue;
            }
            
            if(node->val == val) {
                return node;
            }
            
            st.push(node->left);
            st.push(node->right);
        }
        return nullptr;
    }
};