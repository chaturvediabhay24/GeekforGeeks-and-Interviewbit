//First of all need to find the height of tree first
int height(Node* root)
{
    if(!root)
        return 0;
    
    return 1+max(height(root->left),height(root->right));
}
// This function should return tree if passed  tree 
// is balanced, else false.
bool isBalanced(Node *root)
{
    if(!root)
        return true;
    
    int L = height(root->left);
    int R = height(root->right);
    
    if(abs(L-R) > 1)
        return false;
    else
        return isBalanced(root->left) && isBalanced(root->right);
    
}
