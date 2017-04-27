// Sum The Tree 6th kyu kata

int sumTheTreeValues(node* root) {
  return root ? sumTheTreeValues(root->left) + sumTheTreeValues(root->right) + root->value : 0;
}

