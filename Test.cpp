#include <iostream>
#include <fstream>
using namespace std;

class Product {
    int id;
    char name[30];
    float price;
    int quantity;

public:
    void getData() {
        cout << "\nEnter Product ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Product Name: ";
        cin.getline(name, 30);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cin.ignore(); // clear newline
    }

    void displayData() {
        cout << "\nProduct ID: " << id
             << "\nProduct Name: " << name
             << "\nPrice: " << price
             << "\nQuantity: " << quantity
             << "\n-------------------------\n";
    }

    void writeToFile(ofstream &file) {
        file << id << "\n" << name << "\n" << price << "\n" << quantity << "\n";
    }

    void readFromFile(ifstream &file) {
        file >> id;
        file.ignore();
        file.getline(name, 30);
        file >> price;
        file >> quantity;
        file.ignore();
    }
};

int main() {
    Product p[3];
    ofstream outFile("product.txt");

    cout << "Enter 3 products:\n";
    for (int i = 0; i < 3; i++) {
        p[i].getData();
        p[i].writeToFile(outFile);
    }
    outFile.close();

    ifstream inFile("product.txt");
    cout << "\nProducts read from file:\n";
    for (int i = 0; i < 3; i++) {
        p[i].readFromFile(inFile);
        p[i].displayData();
    }
    inFile.close();

    return 0;
}
