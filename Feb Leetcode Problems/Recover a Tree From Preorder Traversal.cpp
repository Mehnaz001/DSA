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
    TreeNode* constructTree(const string& traversal, int &index, int depth) {
        if(index >= traversal.size())
        return NULL;

        //Count dashes
        int dashCount = 0;
        while(index + dashCount < traversal.size() && traversal[index + dashCount] == '-') {
            dashCount++;
        }

        if(dashCount != depth)
        return NULL;

        index += dashCount;

        int value = 0;
        while(index < traversal.size() && isdigit(traversal[index])) {
            value = value * 10 + (traversal[index]-'0');
            index++;
        }

        //Create the current node
        TreeNode* node = new TreeNode(value);

        node->left = constructTree(traversal,index,depth+1);
        node->right = constructTree(traversal,index,depth+1);

        return node;

    }

    TreeNode* recoverFromPreorder(string traversal) {
        int index = 0;
        return constructTree(traversal,index,0);
    }
};
