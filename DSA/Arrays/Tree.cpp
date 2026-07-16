#include <iostream>
#include<queue>
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
int countNodes(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return 1 + left + right;
}
int leafNodes(TreeNode *root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return leafNodes(root->left) + leafNodes(root->right);
    return leafNodes(root->left) + leafNodes(root->right);
}
void levelOrder(TreeNode* root)
{
    if(root == NULL) return;

    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        TreeNode* frontNode = q.front();
        q.pop();

        if(frontNode != NULL)
        {
            cout << frontNode->data << " ";
            
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << countNodes(root) << endl;
    cout << leafNodes(root);
    
    return 0;
}