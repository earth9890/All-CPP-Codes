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
        left = null;
        right = null;
    }
};

node *insertItem
