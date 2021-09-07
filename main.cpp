#include <iostream>

using namespace std;

char getPrintCharacter(int h, int w, int hmax, int wmax) {
    if (h == 0 || w == 0 || h == hmax || w == wmax) {
        return '#';
    } else {
        return '.';
    }
}

void printRectangle(int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << getPrintCharacter(i, j, h - 1, w - 1);
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int h, w;
    cin >> h >> w;

    while(!(h == 0 && w == 0)) {
        printRectangle(h, w);
        cin >> h >> w;
    }
}