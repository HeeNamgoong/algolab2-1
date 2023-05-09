/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 숫자의 모든 자리수 반복 곱하기                                         *
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

        unsigned long long int num;
        int sup = 1;

        cin >> num;
        
        while (num / 10 != 0) {
            while (num > 0) {
                if (num % 10 == 0) {
                    num = num / 10;
                }
                else {
                    sup *= num % 10;
                    num = num / 10;
                }
            }
            num = sup;
            sup = 1;
        }
        cout << num << endl;
    }
}