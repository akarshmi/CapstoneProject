#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float rate;

public:
    virtual void productInfo() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Product Rate: ";
        cin >> rate;
    }

    virtual void productShow() {
        cout << "\nProduct Details:\n";
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Rate: " << rate << endl;
    }

    float getRate() const {
        return rate;
    }
};

class Bill {
private:
    int quantity;
    float total;

public:
    virtual void calculateBill(Product &p) {
        cout << "\nEnter Quantity: ";
        cin >> quantity;
        total = quantity * p.getRate();
    }

    virtual void showBill() {
        cout << "Total Bill: " << total << endl;
    }
};

int main() {
    Product *prod = new Product();
    prod->productInfo();
    prod->productShow();

    Bill *bill = new Bill();
    bill->calculateBill(*prod);
    bill->showBill();

    delete prod;
    delete bill;

    return 0;
}