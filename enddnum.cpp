/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 끝자리숫자계산하기                                                     *
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

        int count, num;
        int ans = 1;

        cin >> count;

        for (int i = 0; i < count; i++) {
            cin >> num;
            ans *= num % 10;
            ans %= 10;
        }

   

        cout << ans << endl;
    }
}
