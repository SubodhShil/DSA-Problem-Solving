#include <bits/stdc++.h>
using namespace std;

class BTnode
{
public:
    int data;
    BTnode *leftChild, *rightChild;
    BTnode(int data)
    {
        this->data = data;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
};

void levelOrderTraverse(BTnode *root)
{
    queue<BTnode *> nodesQueue;
    nodesQueue.push(root);

    while (!nodesQueue.empty())
    {
        BTnode *current = nodesQueue.front();
        nodesQueue.pop();

        /// do the task: print the value
        cout << current->data << " ";

        /// store the childs if exists
        /// order wise: left node should be insert first if you're traversing from left toward right and vice versa
        if (current->leftChild)
            nodesQueue.push(current->leftChild);

        if (current->rightChild)
            nodesQueue.push(current->rightChild);
    }
}

int main()
{
    BTnode *root = new BTnode(10);
    BTnode *a = new BTnode(20);
    BTnode *b = new BTnode(30);
    BTnode *c = new BTnode(40);
    BTnode *d = new BTnode(50);
    BTnode *e = new BTnode(60);
    BTnode *f = new BTnode(70);
    BTnode *g = new BTnode(80);
    BTnode *h = new BTnode(90);
    BTnode *i = new BTnode(100);

    /// connections
    root->leftChild = a;
    root->rightChild = b;
    a->leftChild = c;
    a->rightChild = h;
    c->rightChild = e;
    b->rightChild = d;
    d->leftChild = f;
    d->rightChild = g;
    h->rightChild = i;

    levelOrderTraverse(root);

    return 0;
}