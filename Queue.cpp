#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class Queue
{
private:
    int front, rear;
    int array[MAX];
    int data;

public:
    Queue()
    {
        front = 0;
        rear = 0;
    }
    void enque()
    {
        if (rear == MAX)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            cout << "Enter Data To insert in Queue" << endl;
            cin >> data;
            array[rear++] = data;
        }
    }
    void deque()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Removing value from position " << front << "  and value is : " << array[front] << endl;
            front++;
        }
    }
    void display()
    {
        for (int i = front; i < rear; i++)
        {
            cout << i << " =  " << array[i] << endl;
        }
    }
};

int main()
{
    int choice;
    Queue q;
    bool exit = true;
    while (exit)
    {
        cout << "1. Insert \n2.Remove \n3.Display \n4.exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enque();
            break;
        case 2:
            q.deque();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit = false;
            break;
        default:
            break;
        }
    }
    return 0;
}