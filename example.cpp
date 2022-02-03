#include <iostream>
using namespace std;
class Node
{
public:
    int Data;
    Node *left;
    Node *right;
    Node(int data)
    {
        Data = data;
        right = left = NULL;
    }
};
class BST
{
    Node *root;
    void inorder(Node *T);

public:
    BST()
    {
        root = NULL;
    }
    void insert(int data);
    void create();
    void PreOrder()
    {
        PreOrder_1(root);
    }
}