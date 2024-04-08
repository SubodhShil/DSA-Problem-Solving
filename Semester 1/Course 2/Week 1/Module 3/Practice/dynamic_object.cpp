#include <bits/stdc++.h>
using namespace std;

class Shopping
{
public:
    char productName[100];
    int productPrice;
    int productQuantity;
    int grandTotal;

    Shopping(char productName[100], int productPrice, int productQuantity)
    {
        strcpy(this->productName, productName);
        this->productPrice = productPrice;
        this->productQuantity = productQuantity;
    }
};

int main()
{
    /// creating a dynamic object of class 'Shopping'
    /// allocate object data in the heap memory

    /// new Student returns a pointer and it can be received by Student type variable
    Shopping *customer1 = new Shopping("Banna", 20, 3);
    // cout << customer1->productName << endl;
    // cout << customer1->productPrice << endl;

    cout << (*customer1).productName << endl;

    /// delete an object
    delete customer1;

    /// proof if object was deleted
    /// now accessing any instance will shows garbage values
    cout << customer1->productName << endl;

    return 0;
}