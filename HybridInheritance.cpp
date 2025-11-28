#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;

public:
    Person(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Employee : public Person {
private:
    int empId;
    string designation;

public:
    Employee(string n, int a, string g, int eid, string d) : Person(n, a, g) {
        empId = eid;
        designation = d;
    }

    void DisplayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empId << ", Designation: " << designation << endl;
    }
};

class Salary {
private:
    float basicPay;
    float hra;
    float da;
    float totalSalary;

public:
    Salary(float bp, float h, float d) {
        basicPay = bp;
        hra = h;
        da = d;
        totalSalary = basicPay + hra + da;
    }

    void calculateSalary() {
        cout << "Total Salary: " << totalSalary << endl;
    }
};

class Payroll : public Employee, public Salary {
public:
    Payroll(string n, int a, string g, int eid, string d, float bp, float h, float da)
        : Employee(n, a, g, eid, d), Salary(bp, h, da) {}

    void displayPayroll() {
        DisplayEmployee();
        calculateSalary();
    }
};

int main() {
    string name, gender, designation;
    int age, empId;
    float basicPay, hra, da;

    cout << "Enter Name: ";
    cin >> name;

    
    cout << "Enter Gender: ";
    cin >> gender;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();
    
    cout << "Enter Designation: ";
    getline(cin, designation);

    cout << "Enter Basic Pay: ";
    cin >> basicPay;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    Payroll pr(name, age, gender, empId, designation, basicPay, hra, da);
    pr.displayPayroll();

    return 0;
}





