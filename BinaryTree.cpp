#include <iostream>
#include <queue>
#include <stack>
//Binary tree definition
typedef struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
}* BinaryTree;

//binary searching to build binary tree
void BuildTree(BinaryTree& root,int val);
//Traverse Tree
void Preorder(TreeNode* root);
void Inorder(TreeNode* root);
void Postorder(TreeNode* root);
void SequenceTraversal(TreeNode* root);

//Traverse Tree by iteration
void Preorder_iteration(TreeNode* root);
void Inorder_iteration(TreeNode* root);
void Postorder_iteration(TreeNode* root);

int main()
{
    BinaryTree root = nullptr;
    BuildTree(root,10);
    BuildTree(root,12);
    BuildTree(root,15);
    BuildTree(root,1);
    BuildTree(root,0);
    BuildTree(root,2);
    BuildTree(root,5);

    std::cout << "Preorder: ";
    Preorder(root);
    std::cout << std::endl;

    std::cout << "SequenceTraversal ";
    SequenceTraversal(root);
    std::cout << std::endl;
}






//
void BuildTree(BinaryTree& root,int val)
{
    TreeNode* prev = nullptr;
    TreeNode* current=root;
    if (root == nullptr)
    {
        root = new TreeNode;
        root->val = val;
        root->left=nullptr;
        root->right=nullptr;
        return;
    }
    while (current != nullptr)
    {
        prev=current;
        if (current->val > val)
        {
            current=current->left;//向左遍历
            if (current == nullptr)
            {
                prev->left=new TreeNode;    //冗余代码，可以用InsertNode()函数代替
                prev->left->val=val;
                prev->left->left=nullptr;
                prev->left->right=nullptr;
            }
        }
        else
        {
            current=current->right;//向右遍历
            if (current == nullptr)
            {
                prev->right=new TreeNode;
                prev->right->val=val;
                prev->right->left=nullptr;
                prev->right->right=nullptr;
            }
        }
    }   
}

void Preorder(TreeNode* root)
{
    if (root != nullptr)
    {
        std::cout << root->val << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
    
}
void SequenceTraversal(TreeNode* root)
{
    std::queue<TreeNode*> q;
    TreeNode* temp=nullptr;
    q.push(root);
    while (!q.empty())
    {
        temp=q.front();
        if (temp->left != nullptr)
            q.push(temp->left);
        if (temp->right != nullptr)
            q.push(temp->right);
        std::cout << q.front()->val << " ";
        q.pop();
    }
}
