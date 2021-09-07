//
// Created by kaleidot725 on 2021/09/06.
//

#include <iostream>

using namespace std;

char ITP1_5_B_getPrintCharacter(int h, int w, int hmax, int wmax) {
    if (h == 0 || w == 0 || h == hmax || w == wmax) {
        return '#';
    } else {
        return '.';
    }
}

void ITP1_5_B_printRectangle(int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << ITP1_5_B_getPrintCharacter(i, j, h - 1, w - 1);
        }
        cout << endl;
    }
    cout << endl;
}

int ITP1_5_B() {
    int h, w;
    cin >> h >> w;

    while(!(h == 0 && w == 0)) {
        ITP1_5_B_printRectangle(h, w);
        cin >> h >> w;
    }
    return 0;
}