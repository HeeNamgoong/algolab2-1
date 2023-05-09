/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 직선 그래프 출력하기                                                   *
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

        int n;
        cin >> n;
        int half = n / 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == half && i == half) {
                    cout << "O";
                }
                else if (j == half) {
                    cout << "I";
                }
                else if (i == half) {
                    cout << "+";
                }
                else if (j + i == n - 1) {
                        cout << "*";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}