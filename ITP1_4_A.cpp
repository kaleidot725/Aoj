#include <iostream>
#include <iomanip>

using namespace std;

int ITP1_4_A() {
    int a, b;
    cin >> a >> b;

    int d = a / b;
    int r =  a % b;
    double f = (double)a / (double)b;
    cout << d << " " << r << " " << fixed << setprecision(6) << f << endl;
    return 0;
}
