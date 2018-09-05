/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot ==nullptr)
            return 0;
        int right = TreeDepth(pRoot->right);
        int left = TreeDepth(pRoot->left);
        return max(right+1, left+1);
    
    }
};