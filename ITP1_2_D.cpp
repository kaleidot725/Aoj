#include <iostream>
using namespace std;

int ITP1_2_D() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;

    int minw = 0, maxw = w;
    int minh = 0, maxh = h;
    int minx = x - r, maxx = x + r;
    int miny = y - r, maxy = y + r;

    if ((minw <= minx && maxx <= maxw) && (minh <= miny && maxy <= maxh)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
