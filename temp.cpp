int Height(Node *root) {
  if (!root) {
    return 0;
  } else {
    int leftH = Height(root->left);
    int rightH = Height(root->right);
    if (leftH > rightH) {
      return 1 + leftH;
    } else {
      return 1 + rightH;
    }
  }
}