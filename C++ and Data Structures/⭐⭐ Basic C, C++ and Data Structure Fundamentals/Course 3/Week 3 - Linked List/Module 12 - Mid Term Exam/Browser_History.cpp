#include <bits/stdc++.h>
using namespace std;

class DoublyLL
{
public:
    string str;
    DoublyLL *nextNode;
    DoublyLL *prevNode;

    DoublyLL(string str)
    {
        this->str = str;
        nextNode = nullptr;
        prevNode = nullptr;
    }
};

int main()
{
    DoublyLL *head = nullptr, *tail = nullptr;

    while (1)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;

        DoublyLL *newNode = new DoublyLL(s);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->nextNode = newNode;
            newNode->prevNode = tail;
            tail = newNode;
        }
    }

    DoublyLL *it = head;

    int q;
    cin >> q;
    for (int i = 1; i <= q; ++i)
    {
        string str;
        if (i == 1)
            cin.ignore();
        getline(cin, str);

        stringstream ss(str);
        string word;
        string url;
        while (ss >> word)
        {
            if (word != "visit")
            {
                url = word;
            }
        }

        if (url == "prev")
        {
            if (it->prevNode != nullptr)
            {
                it = it->prevNode;
                cout << it->str << endl;
            }
            else
            {
                cout << "Not Available\n";
            }
        }

        else if (url == "next")
        {
            if (it->nextNode != nullptr)
            {
                it = it->nextNode;
                cout << it->str << endl;
            }
            else
            {
                cout << "Not Available\n";
            }
        }

        else
        {
            DoublyLL *temp = head;

            while (temp)
            {
                if (temp->str == url)
                {
                    cout << url << endl;
                    it = temp;
                    break;
                }

                temp = temp->nextNode;
            }

            if (temp == nullptr)
            {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}