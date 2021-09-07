#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int ITP1_4_B() {
    double r;
    cin >> r;

    double a = r * r * M_PI;
    double b = 2 * r * M_PI;

    cout << fixed << setprecision(6) << a << " " << b << endl;
    return 0;
}