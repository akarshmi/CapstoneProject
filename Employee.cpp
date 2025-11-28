#include <iostream>
using namespace std;

class Employee
{

private:
    int empId;
    string empDesig;
    int workingHours;
    float workingRate, salary;

public:
    void setEmpData(int Id, string Desig, int Hours, float Rate)
    {
        empId = Id;
        empDesig = Desig;
        workingHours = Hours;
        workingRate = Rate;
        cout << "Data Setted.";
    }
    float calculateSalary()
    {
        salary = workingHours * workingRate;
    }

    float calcualteBonus(float salary)
    {
        if (salary <= 20000)
        {
            return salary + 1000;
        }
        else
        {

            return salary;
        }
    }
    void getEmpData()
    {
        cout << "Employee's ID:" << empId << endl;
        cout << "Employee's Designation:" << empDesig << endl;
        cout << "Employee's Working Hours:" << workingHours << endl;
        cout << "Employee's Hourly Working Rate:" << workingRate << endl;
        calculateSalary();
        cout << "Employee's Salary:" << salary << endl;
        float bonusSalary = calcualteBonus(salary);
        cout << "Employee's Bonus Salary:" << bonusSalary << endl;
    }
};

int main()
{
    int id, hrs;
    string designation;
    float rate;

    cout << "Enter Employee id: ";
    cin >> id;
    cout << "Enter Working Hours: ";
    cin >> hrs;
    cout << "Enter Hourly Working Rate: ";
    cin >> rate;
    cout << "Enter your Designaton: ";
    cin >> designation;

    Employee e;
    e.setEmpData(id, designation, hrs, rate);
    e.getEmpData();

    return 0;
}