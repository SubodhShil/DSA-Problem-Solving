#include <bits/stdc++.h>
using namespace std;

class DoublyLL
{
public:
    int data;
    DoublyLL *nextNode;
    DoublyLL *prevNode;

    DoublyLL(int data)
    {
        this->data = data;
        nextNode = nullptr;
        prevNode = nullptr;
    }
};

void printDLL(DoublyLL *head, DoublyLL *tail)
{
    cout << "L -> ";
    while (head)
    {
        cout << head->data << " ";
        head = head->nextNode;
    }

    cout << "\nR -> ";
    while (tail)
    {
        cout << tail->data << " ";
        tail = tail->prevNode;
    }

    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    DoublyLL *head = nullptr, *tail = nullptr;
    while (q--)
    {
        int pos, ele;
        cin >> pos >> ele;

        DoublyLL *newNode = new DoublyLL(ele);

        if (pos > 0 && head == nullptr)
        {
            cout << "Invalid\n";
        }

        /// handling the very first node and insert at head
        else if (pos == 0)
        {
            if (head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->nextNode = head;
                head->prevNode = newNode;
                head = newNode;
            }
            printDLL(head, tail);
        }

        else
        {
            bool isNull = false;
            DoublyLL *it = head;

            for (int i = 1; i <= pos - 1; ++i)
            {
                it = it->nextNode;
                if (it == nullptr)
                {
                    isNull = true;
                    break;
                }
            }

            if (isNull)
            {
                cout << "Invalid\n";
            }

            /// if insert at tail
            else if (it->nextNode == nullptr)
            {
                tail->nextNode = newNode;
                newNode->prevNode = tail;
                tail = newNode;
                printDLL(head, tail);
            }

            /// if insert at any other position
            else
            {
                newNode->nextNode = it->nextNode;
                it->nextNode->prevNode = newNode;
                newNode->prevNode = it;
                it->nextNode = newNode;
                printDLL(head, tail);
            }
        }
    }

    return 0;
}
