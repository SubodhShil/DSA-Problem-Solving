#include <bits/stdc++.h>
using namespace std;

class Shopping
{
public:
    char productName[100];
    int productPrice;
    int productQuantity;
    int grandTotal;

    Shopping(char productName[100], int productPrice, int productQuantity, int grandTotal)
    {
        strcpy(this->productName, productName);
        this->productPrice = productPrice;
        this->productQuantity = productQuantity;
        this->grandTotal = grandTotal;
    }
};

Shopping userCart()
{
    char name[100];
    int price;
    int quantity;
    int grandTotal;

    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product price: ";
    cin >> price;
    cout << "Enter qunatity: ";
    cin >> quantity;
    /// calculating the total cost of the user
    grandTotal = price * quantity;

    Shopping tempShop(name, price, quantity, grandTotal);

    return tempShop;
}

/// declared outside of the class
void productMemo(Shopping obj)
{
    cout << "\n\nProudct name:\t\t" << obj.productName << endl;
    cout << "Product price:\t\t" << obj.productPrice << endl;
    cout << "Product quantity:\t" << obj.productQuantity << endl;
    cout << "------------------------------\n";
    cout << "Total\t\t\t = " << obj.grandTotal << endl;
}

int main()
{
    Shopping firstCustomer = userCart();
    productMemo(firstCustomer);

    Shopping secondCustomer = userCart();
    productMemo(secondCustomer);

    return 0;
}