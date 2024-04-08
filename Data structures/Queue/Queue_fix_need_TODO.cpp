//* Queue
/// TODO some fix needed

#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int rear;
    int front;
    int size;
    int *queueArray;

public:
    Queue()
    {
        rear = -1, front = -1;
    }

    void createQueue()
    {
        cout << "Enter a suitable size for Queue: ";
        cin >> size;
        queueArray = new int[size];
    }

    bool isEmpty()
    {
        if (rear == -1 and front == -1)
            return true;
        return false;
    }

    bool isFull()
    {
        if (rear == size - 1)
            return true;

        return false;
    }

    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Can't enter any element, Queue is full\n";
            return;
        }

        else
        {
            queueArray[++rear] = element;
        }
    }

    void deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty, can't delete elements\n";
            return;
        }

        else
        {
            front++;
        }
    }

    void displayQueue()
    {
        if (isEmpty())
        {
            cout << "Can't display, Queue is empty\n";
        }

        for (int i = front + 1; i <= rear; i++)
        {
            cout << queueArray[i] << " ";
        }
    }
};

int main()
{
    Queue q;

    q.createQueue();
    q.enQueue(100);
    q.enQueue(200);
    q.enQueue(300);
    q.enQueue(400);
    q.enQueue(600);
    q.deQueue();
    q.displayQueue();

    return 0;
}