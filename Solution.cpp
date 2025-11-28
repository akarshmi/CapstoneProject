#include <iostream>
using namespace std;

class ElectricityBill
{

private:
    int currentReading, lastReading, totalUnit;
    double billAmount;

public:

    void residentialBillCalculation(int cr, int lr)
    {

        currentReading = cr;
        lastReading = lr;
        totalUnit = currentReading - lastReading;
        cout << totalUnit << endl;

        if (totalUnit < 100)
        {
            billAmount = totalUnit * 3;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else if (totalUnit >= 100 && totalUnit < 200)
        {
            billAmount = (100 * 3) + (totalUnit - 100) * 4;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else if (totalUnit >= 200 && totalUnit < 300)
        {
            billAmount = (100 * 3) + (100 * 4) + (totalUnit - 200) * 5;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else
        {
            billAmount = (100 * 3) + (100 * 4) + (100 * 5) + (totalUnit - 300) * 6;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
    }
    void commercialBillCalculation(int cr, int lr)
    {

        currentReading = cr;
        lastReading = lr;
        totalUnit = currentReading - lastReading;
        cout << totalUnit << endl;

        if (totalUnit < 100)
        {
            billAmount = totalUnit * 8;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else if (totalUnit >= 100 && totalUnit < 200)
        {
            billAmount = (100 * 8) + (totalUnit - 100) * 9;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else if (totalUnit >= 200 && totalUnit < 300)
        {
            billAmount = (100 * 8) + (100 * 9) + (totalUnit - 200) * 10;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
        else
        {
            billAmount = (100 * 8) + (100 * 9) + (100 * 10) + (totalUnit - 300) * 12;
            cout << "The Bill is : " << billAmount << " Rs Only." << endl;
        }
    }
};

int main()
{

    cout<<"No of Consumer to generate bills.";
    int numConsumers;
    cin>>numConsumers;

    ElectricityBill eBill[numConsumers];
    
    for(int i=0;i<numConsumers;i++){
        
            int accType;
            cout<<"Type of Account: \n 1.) Commercial \n 2.) Residential  "<<endl;
            cin>>accType;
            
            int cr, lr, tu;
            cout << "Enter the Current Reading and Last Reading: ";
            cin >> cr >> lr;
            
            switch(accType){
                case 1:
                    eBill[i].commercialBillCalculation(cr, lr);
        
                    break;
                case 2:
                    eBill[i].residentialBillCalculation(cr, lr);
        
                    break;
                default: 
                    cout<<"Wrong Input Type.";
                    break;
            }    


    }


}