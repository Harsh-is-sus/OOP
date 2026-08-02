// Code by Harsh Deshmukh SY CSE-B 15
// Create a class Product to store product information and display the details using functions defined outside the class


#include <iostream>
using namespace std;

class Product
{
private:
    int productId;
    string productName;
    float price;

public:
    void accept();    
    void display();  
};


void Product::accept()
{
    cout << "Enter Product ID: ";
    cin >> productId;

    cout << "Enter Product Name: ";
    cin >> productName;

    cout << "Enter Product Price: ";
    cin >> price;
}


void Product::display()
{
    cout << "\n    Product Details    " << endl;
    cout << "Product ID    : " << productId << endl;
    cout << "Product Name  : " << productName << endl;
    cout << "Product Price : " << price << endl;
}

int main()
{
    Product p;

    p.accept();
    p.display();

    return 0;
}
