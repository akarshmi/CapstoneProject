#include <iostream>
using namespace std;

class DistanceCalculator{

    int totalDistanceInMeter;
    int KM,M;

    public:
    void getDistance(int km, int m){
        KM = km;
        M= m;
     }
    
    DistanceCalculator totalDistance(DistanceCalculator d1, DistanceCalculator d2){

        DistanceCalculator d;

        totalDistanceInMeter= ((d1.KM*1000) + d1.M) + ((d2.KM*1000) + d2.M);
        cout<<"Total KM: "<<endl<<d1.KM+d2.KM<<" and Meters are: "<<d1.M+d2.M<< endl;
        // cout<<totalDistanceInMeter;
        
        return d;
    }


};

int main(){

    int dInKm;
    int dInM;

    DistanceCalculator d1,d2,d3,d;

    
        cout<<"Distance in KM";
        cin>>dInKm;
        cout<<"Distance in M";
        cin>>dInM;
        
        d1.getDistance(dInKm,dInM);
        
        cout<<"Distance in KM";
        cin>>dInKm;
        cout<<"Distance in M";
        cin>>dInM;
        
        d2.getDistance(dInKm,dInM);
        d3.totalDistance(d1,d2);
        d = d3.totalDistance(d1,d2);
        

    return 0;

}