#include <iostream>
using namespace std;

int main() {
   int distance = 12;
    try{
        if (distance > 10)
            throw distance;
        cout << "Distance is within limit." << endl;
    }
    catch (int d) {
        cout << "Error: Distance " << d << " exceeds limit!" << endl;
    }

    return 0;
}
