/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 두 사각형 면적 둘레 구하기                                             *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 소프트웨어융합대학 소프트웨어학부 2 학년                    *
* 20223068 남궁희                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
using namespace std;

int main() {

    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int x, y, w, z;
        int a, b, c, d;

        cin >> x >> y >> w >> z;
        cin >> a >> b >> c >> d;

        int S = 0, periphery = 0;

        if (w < a || x > c || d < y || z < b) {

            if (((a < x && x < c) && (a < w && w < c)) && ((b < y && y < d) && (b < z && z < d))) {
                S = (d - b) * (c - a);
                periphery = 2 * (d - b + c - a);
            }
            else if (((x < a && a < w) && (x < c && c < w)) && ((y < b && b < z) && (y < d && d < z))) {
                S = (w - x) * (z - y);
                periphery = 2 * (w - x + z - y);
            }
             
            else {
                S = (w - x) * (z - y) + (c - a) * (d - b);
                periphery = 2 * ((w - x + z - y + c - a + d - b));
            }
        }
        else {
            int ls_x[4] = { x, w, a, c };
            int ls_y[4] = { y, z, b, d };
            sort(ls_x, ls_x + 4);
            sort(ls_y, ls_y+4);

            S = ((w - x) * (z - y) + (c - a) * (d - b)) - (ls_x[2] - ls_x[1]) * (ls_y[2] - ls_y[1]);
            periphery = 2 * ((ls_x[3] - ls_x[0]) + (ls_y[3] - ls_y[0]));
        }
        cout << S << " " << periphery << endl;
    }
}