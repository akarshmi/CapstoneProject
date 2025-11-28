#include <iostream>
#include <string>
using namespace std;

class Calculator
{

    // OOPS Methodology to create a simple calculator

private:
    double number1, number2, result;

public:
    Calculator(double num1, double num2)
    {
        number1 = num1;
        number2 = num2;
        result = 0.0;
    }

    void add()
    {
        result = number1 + number2;
        cout << "The result of addition is: " << result << endl;
    }

    void subtract()
    {
        result = number1 - number2;
        cout << "The result of subtraction is: " << result << endl;
    }
    void multiply()
    {
        result = number1 * number2;
        cout << "The result of multiplication is: " << result << endl;
    }
    void divide()
    {
        if (number2 != 0)
        {
            result = number1 / number2;
            cout << "The result of division is: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
};

int main()
{
    bool loop = true;

    while (loop)
    {
        // Simple Calculator using Procedural Programming

        cout << "Welcome to the Calculator!" << endl;
        cout << "Enter which operation you want to perform:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        int choice, method;
        cin >> choice;

        if (choice == 5){
            cout << "Exiting the calculator. Goodbye!" << endl;
            loop = false;
            continue;
        }
        double num1, num2;
        cout << "Enter the first number:";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        Calculator calc(num1, num2);

        cout << "Choose methodology 1 for Procedural or 2 for OOPS " << endl;
        cin >> method;

        switch (choice)
        {
        case 1:
            cout << "You chose Addition." << endl;
            if (method == 1)
            {
                cout << "The result is:" << num1 + num2 << endl;
            }
            else if (method == 2)
            {
                calc.add();
            }
            else
            {
                cout << "Invalid method choice." << endl;
            }
            break;
        case 2:
            cout << "You chose Substraction." << endl;
            if (method == 1)
            {
                cout << "The result is:" << num1 - num2 << endl;
            }
            else if (method == 2)
            {
                calc.subtract();
            }
            else
            {
                cout << "Invalid method choice." << endl;
            }
            break;
        case 3:
            cout << "You chose Multiplication." << endl;
            if (method == 1)
            {
                cout << "The result is:" << num1 * num2 << endl;
            }
            else if (method == 2)
            {
                calc.multiply();
            }
            else
            {
                cout << "Invalid method choice." << endl;
            }
            break;
        case 4:
            cout << "You chose Divide." << endl;
            if (method == 1)
            {
                cout << "The result is:" << num1 / num2 << endl;
            }
            else if (method == 2)
            {
                calc.divide();
            }
            else
            {
                cout << "Invalid method choice." << endl;
            }
            break;

        default:
            cout << "Invalid choice. Please select a valid operation." << endl;
            break;
        }
    }

    return 0;
}