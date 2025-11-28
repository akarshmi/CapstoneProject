#include <iostream>
#include <string>

using namespace std;

class Admission
{

private:
    int candidateId;
    string name, program;
    double fee;
    static double standardFee;

public:
    void getStudentInfo(string studentName, string StudentProgram, int id, double stdFee)
    {

        candidateId = id;
        name = studentName;
        program = StudentProgram;
        Admission::standardFee = stdFee;
    }

    void displayStudentInfo()
    {

        cout << "Candidate Id: " << candidateId<<endl;
        cout << "Name: " << name<<endl;
        cout << "Program: " << program<<endl;
        cout << "Stadard Fee: " << standardFee<<endl;
    }

    double calculateFee()
    {
        double percenatage;
        double scholarship;
        cout << "Enter last year percentage: ";
        cin >> percenatage;
        if(percenatage>=90){
            fee = standardFee*.5;
        }else if (percenatage>=80){
            fee = standardFee*.3;
        }else if(percenatage>=70){
            fee = standardFee*.2;
        }else{

            cout << "You couldn't get any scholarship: " <<endl;
        }
        cout << "Fee after Scholarship: " << fee<<endl;

        return fee;
    }

    static void modifyStandardFee()
    {
        double newStandardFee;
        cout << "Enter New Standard Fee: ";
        cin >> newStandardFee;
        Admission::standardFee=newStandardFee;
    }
};

double Admission::standardFee = 0.0;

int main()
{
    int candidateId;
    string name, program;
    static double standardFee;

    cout << "Enter Name of Student: ";
    cin >> name;

    cout << "Enter Program Name: ";
    cin >> program;

    cout << "Enter Candidate Id: ";
    cin >> candidateId;

    // cout<<"Enter Standard Fee: ";
    // cin>>standardFee;

    Admission s1;
    s1.getStudentInfo(name, program, candidateId, 100000);
    // s1.displayStudentInfo();
    s1.calculateFee();
    s1.displayStudentInfo();

    // Admission::modifyStandardFee();
    // s1.calculateFee();


    return 0;
}
