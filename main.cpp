#include <iostream>

using namespace std;

char getPrintCharacter(int hIndex, int wIndex, int hIndexMax, int wIndexMax) {
    if (hIndex == 0 || wIndex == 0 || hIndex == hIndexMax || wIndex == wIndexMax) {
        return '#';
    } else {
        return '.';
    }
}

void printRectangle(int height, int width) {
    int hIndexMax = height - 1;
    int wIndexMax = width - 1;
    for (int hIndex = 0; hIndex < height; hIndex++) {
        for (int wIndex = 0; wIndex < width; wIndex++) {
            cout << getPrintCharacter(hIndex, wIndex, hIndexMax, wIndexMax);
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int height, width;
    do {
        cin >> height >> width;
        printRectangle(height, width);
    } while(!(height == 0 && width == 0));
}