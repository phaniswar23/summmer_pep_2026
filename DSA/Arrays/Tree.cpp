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

    return 0;
}