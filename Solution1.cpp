#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int marks[3];

public:
    void getDetails(int RollNo, string Name, int Marks[]) {
        roll = RollNo;
        name = Name;
        for (int i = 0; i < 3; i++) {
            marks[i] = Marks[i];
        }
    }

    void showData() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    friend float calculateAverage(Student s);
};

float calculateAverage(Student s) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s.marks[i];
    }
    return static_cast<float>(sum) / 3;
}

int main() {
    Student s1;
    int roll;
    string name;
    int marks[3];

    cout << "Enter Roll No.: ";
    cin >> roll;
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Marks: ";
    for (int i = 0; i < 3; i++) {
        cin >> marks[i];
    }

    s1.getDetails(roll, name, marks);
    s1.showData();

    float avg = calculateAverage(s1);
    cout << "Average = " << avg << endl;

    return 0;
}