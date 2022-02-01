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
}