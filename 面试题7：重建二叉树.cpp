/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int inlength = vin.size();
        if(inlength==0)
            return nullptr;
        vector<int> leftpre,leftvin,rightpre,rightvin;
        TreeNode* root = new TreeNode(pre[0]);
        int gen = 0;
        for(int i=0; i<inlength; i++)
        {
            if(vin[i]==pre[0])
            {
                gen = i;
                break;
            }
        }
        for(int i=0; i<gen; i++)
        {
            leftpre.push_back(pre[i+1]);
            leftvin.push_back(vin[i]);
        }
        for(int i=gen+1; i<inlength; i++)
        {
            rightpre.push_back(pre[i]);
            rightvin.push_back(vin[i]);
        }
        root->left = reConstructBinaryTree(leftpre, leftvin);
        root->right = reConstructBinaryTree(rightpre, rightvin);
        return root;

    }
};