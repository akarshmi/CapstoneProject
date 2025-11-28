#include <iostream>
using namespace std;

class SI {
    double P, R, T;

public:
    SI(double p, double r, double t) : P(p), R(r), T(t) {
        cout << "Simple Interest is: " << (P * R * T) / 100 << endl;
        cout << "Total Amount: " << ((P * R * T) / 100) + P << endl;
    }
};

int main() {
    cout << "Enter P R and T: ";
    double p, r, t;
    cin >> p >> r >> t;

    SI si(p, r, t);
    return 0;
}
