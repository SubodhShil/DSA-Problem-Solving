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

BTnode *covertArrayToBT(int *arr, int n, int l, int r)
{
    if (l > r)
        return nullptr;

    int mid = l + (r - l) / 2;
    BTnode *root = new BTnode(arr[mid]);
    BTnode *leftNode = covertArrayToBT(arr, n, l, mid - 1);
    BTnode *rightNode = covertArrayToBT(arr, n, mid + 1, r);

    root->leftChild = leftNode;
    root->rightChild = rightNode;

    return root;
}

void levelOrder(BTnode *root)
{
    if (root == NULL)
    {
        cout << "Tree doesn't exist" << endl;
        return;
    }

    queue<BTnode *> q;
    q.push(root);
    while (!q.empty())
    {

        BTnode *f = q.front();
        q.pop();

        cout << f->data << " ";

        if (f->leftChild)
            q.push(f->leftChild);
        if (f->rightChild)
            q.push(f->rightChild);
    }
}

void insert(BTnode *&root, int x)
{
    if (!root)
    {
        root = new BTnode(x);
        return;
    }

    if (x < root->data)
    {
        if (!root->leftChild)
        {
            root->leftChild = new BTnode(x);
        }
        else
        {
            insert(root->leftChild, x);
        }
    }

    else
    {
        if (!root->rightChild)
        {
            root->rightChild = new BTnode(x);
        }
        else
        {
            insert(root->rightChild, x);
        }
    }
}

bool isPresent(BTnode *it, int target)
{
    if (!it)
        return false;
    if (it->data == target)
        return true;
    if (target < it->data)
        return isPresent(it->leftChild, target);
    else
        return isPresent(it->rightChild, target);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    BTnode *root = covertArrayToBT(arr, n, 0, n - 1);
    levelOrder(root);

    return 0;
}