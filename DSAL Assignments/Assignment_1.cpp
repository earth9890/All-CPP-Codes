#include <iostream>
using namespace std;
struct Node
{
    int Data;
    Node *Left;
    Node *Right;
};
class BST
{
    Node *root;

public:
    BST()
    {
        root = NULL;
    }
    int IsEmpty()
    {
        return (root == NULL);
    }
    void InsertItem(int Data);
    void DisplayTree();
    void PrintBinaryTree(Node *ptr);
};

void BST ::InsertItem(int data)
{
    Node *node = new Node;
    node->Data = data;
    node->Left = NULL;
    node->Right = NULL;
    return (Node * node);
}