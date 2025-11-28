#include <iostream>
using namespace std;

class SimpleIntrest{
    public:
    void UsingVoid(int p,int r, int t){
        cout<<"The Intrest is "<<(p*r*t)/100;
    }

    double UsingDouble(int p,int r, int t){
        return (p*r*t)/100;
    }

};

void withOutClass(float p, float r, float t){
    cout<<"The Intrest is "<<(p*r*t)/100;
}


int main()
{
    float p,r,t;
    cout<<"Enter the Principle Amount: ";
    cin>>p;
    cout<<"Enter the Rate of Intrest: ";
    cin>>r;
    cout<<"Enter the Time Period: ";
    cin>>t;
    cout<<"The Intrest is "<<(p*r*t)/100;

    SimpleIntrest si;

    // si.UsingVoid(p,r,t);


    // double result = si.UsingDouble(p,r,t);
    // cout<<"The Intrest is "<<result;


    // void withOutClass();

    
    
    
    return 0;
}
