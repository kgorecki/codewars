// Fun with trees: max sum 6th kyu kata

class Solution
{
public:
  static int maxSum(TreeNode* root)
  {
    if (!root)
      return 0;
    
    int left = maxSum(root->left) + root->value;
    int right = maxSum(root->right) + root->value;
    return (left > right ? left : right);
  }
};

