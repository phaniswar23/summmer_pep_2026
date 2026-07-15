#include<iostream>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(TreeNode* root)
{
    //base case
    if(root == NULL) return;
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(TreeNode* root)
{
    //base case
    if(root == NULL) return;
    preorder(root->left);
    cout << root->data << endl;
    preorder(root->right);
}
void inorder(TreeNode* root)
{
    //base case
    if(root == NULL) return;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    
    return 0;
}