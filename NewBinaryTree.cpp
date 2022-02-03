#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertItem(node *root, int val)
{
}
