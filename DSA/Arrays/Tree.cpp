#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;   
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(TreeNode *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode *root)
{
    // base case
    if (root == NULL)
        return;
    inorder(root->left);
cout << root->data << endl;
inorder(root->right);
}
void postorder(TreeNode *root)
{
    // base case
    if (root == NULL)
        return;
     postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2)
    return 0;
}