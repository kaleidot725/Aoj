#include <iostream>
using namespace std;

int ITP1_3_B() {
    int i, c;

    c = 1;
    cin >> i;
    while(i != 0) {
        cout << "Case " << c << ": " << i << endl;
        c++;
        cin >> i;
    }
    return 0;
}
