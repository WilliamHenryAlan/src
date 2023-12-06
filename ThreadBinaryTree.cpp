#include <iostream>
//Thread tree definition
typedef struct ThreadNode
{
    int val;
    ThreadNode* left;
    ThreadNode* right;
    int ltag,rtag;
}* ThreadBinaryTree;


//Thread Tree
void CreateThread(ThreadBinaryTree root);   //Thread Tree
void InThread(ThreadNode* root);
void visit(ThreadNode* root);

//BuildThreadTree
void BuildThreadTree(ThreadBinaryTree& root,int val);
void InsertNode(ThreadNode*& ret,int val);

//global variable
ThreadNode* prev = nullptr;

int main()
{

    ThreadBinaryTree root = nullptr;
    BuildThreadTree(root,10);
    BuildThreadTree(root,12);
    BuildThreadTree(root,15);
    BuildThreadTree(root,1);
    BuildThreadTree(root,0);
    BuildThreadTree(root,2);
    BuildThreadTree(root,5);

    std::cout << "Preorder: ";
    InThread(root);
    std::cout << std::endl;
}

void InThread(ThreadNode* root)
{
    if (root != nullptr)
    {
        InThread(root->left);
        visit(root);   
        InThread(root->right);
    }
}
void visit(ThreadNode* root)
{
    std::cout << root->val << " ";
    if (root->left == nullptr)
    {
        root->left=prev;
        root->ltag=1;
    }
    if (prev != nullptr and prev->right == nullptr)
    {
        prev->right=root;
        prev->rtag=1;
    }
    prev=root;
}
void BuildThreadTree(ThreadBinaryTree& root,int val)
{
    ThreadNode* prev = nullptr;
    ThreadNode* current=root;
    if (root == nullptr)
    {
        InsertNode(root,val);
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
                InsertNode(prev->left,val);
            }
        }
        else
        {
            current=current->right;//向右遍历
            if (current == nullptr)
            {
                InsertNode(prev->right,val);
            }
        }
    }   
}
void InsertNode(ThreadNode*& ret,int val)
{
    ret=new ThreadNode;
    ret->val=val;
    ret->left=nullptr;
    ret->right=nullptr;
    ret->ltag=0;
    ret->rtag=0;
}

void CreateThread(ThreadBinaryTree root)
{
    if (root == nullptr)
    {   
        return;
    }
    InThread(root);
    if (prev->right == nullptr)
    {
        prev->rtag=1;
    }
    
    
}