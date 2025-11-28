#include <iostream>
using namespace std;

class CopyCons {
    int marks[5];

public:
    CopyCons(int mark[]) {
        cout << "Original Marks: ";
        for (int i = 0; i < 5; i++) {
            marks[i] = mark[i];
            cout << marks[i] << "  ";
        }
        cout << endl;
    }

    CopyCons(const CopyCons &obj) {
        // cout << "Copy constructor called!" << endl;
        for (int i = 0; i < 5; i++) {
            marks[i] = obj.marks[i];
        }
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << "  ";
        }
        cout << endl;
    }

    void input() {
        for (int i = 0; i < 5; i++) {
            cin>> marks[i];
        }
    }
};

int main() {
    int mark[5];

    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++) {
        cin >> mark[i];
    }

    CopyCons c1(mark);
    // cout << "Displaying c1: ";
    // c1.display();
    
    CopyCons c2 = c1;
    cout << "Input Improved Marks c2: ";
    c2.input();

    cout << "Orignal Marks : ";
    c1.display();
    cout << "Improved Marks : ";
    c2.display();

    return 0;
}