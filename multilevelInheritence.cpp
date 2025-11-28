#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int reg;

public:
    void getStudentData(string nameStudent, int regNo)
    {
        name = nameStudent;
        reg = regNo;
    }

    void displayStudentData()
    {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << reg << endl;
    }
};

class Exam : public Student
{
protected:
    float marks[3];

public:
    void getMarks(float m[3])
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }

    void displayMarks()
    {
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam
{
    float total;

public:
    void calculateTotal()
    {
        total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
    }

    void displayResult()
    {
        displayStudentData();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;
    string name;
    int reg;
    float m[3];

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter registration number: ";
    cin >> reg;
    cout << "Enter 3 marks: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> m[i];
    }

    r.getStudentData(name, reg);
    r.getMarks(m);
    r.calculateTotal();
    r.displayResult();

    return 0;
}