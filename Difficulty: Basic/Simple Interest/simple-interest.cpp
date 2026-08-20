#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int p, r, t;
    cin >> p >> r >> t;

    
    double si = (p * r * t) / 100.0;
    cout << fixed << setprecision(2) << si;

    return 0;
}