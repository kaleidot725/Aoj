#include <iostream>

using namespace std;

int ITP1_4_C() {
    int a, b;
    char op;

    while(true) {
        cin >> a >> op >> b;
        if (op == '+') {
            cout << a + b << endl;
        } else if (op == '-') {
            cout << a - b << endl;
        } else if (op == '*') {
            cout << a * b << endl;
        } else if (op == '/') {
            cout << a / b << endl;
        } else if (op == '?') {
            break;
        }
    }
    return 0;
}