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
        left = NULL;
        right = NULL;
    }
};
//print tree
void printTree(TreeNode *root, int space = 0)
{
    if (root == NULL)
        return;

    space += 5;

    printTree(root->right, space);

    cout  << endl;
    for (int i = 5; i < space; i++)
        cout << " ";
    cout << root->data << "" << endl ;

    printTree(root->left, space);
}
// Preorder
void preorder(TreeNode *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder
void inorder(TreeNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder
void postorder(TreeNode *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Count Total Nodes
int countNodes(TreeNode *root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Count Leaf Nodes
int countLeafNodes(TreeNode *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

// Height of Tree
int height(TreeNode *root)
{
    if (root == NULL)
        return -1;   // Height in terms of edges

    return 1 + max(height(root->left), height(root->right));
}

// Search
bool search(TreeNode *root, int key)
{
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    return search(root->left, key) || search(root->right, key);
}

int main()
{
    // Creating Tree

    TreeNode *root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->right = new TreeNode(20);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(7);

    root->left->right->left = new TreeNode(6);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(30);

    root->right->right->left = new TreeNode(25);

    printTree(root);
    cout << "Preorder : ";
    preorder(root);

    cout << "\nInorder : ";
    inorder(root);

    cout << "\nPostorder : ";
    postorder(root);

    cout << "\n\nTotal Nodes : " << countNodes(root);

    cout << "\nLeaf Nodes : " << countLeafNodes(root);

    cout << "\nHeight : " << height(root);

    int key = 25;

    if (search(root, key))
        cout << "\n" << key << " Found";
    else
        cout << "\n" << key << " Not Found";

    return 0;
}