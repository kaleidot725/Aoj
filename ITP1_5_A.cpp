#include <iostream>

using namespace std;

void ITP1_5_A_printRectangle(int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
}

int ITP1_5_A() {
    int h, w;
    cin >> h >> w;

    while(!(h == 0 && w == 0)) {
        ITP1_5_A_printRectangle(h, w);
        cin >> h >> w;
    }
}