/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 이진수에서 0과 1의 개수                                                *
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
    int sup = 1;

    for (int i = 0; i < numTestCases; i++) {

        int num;
        cin >> num;

        int zero = 0;
        int one = 0;

        while (num != 0) {
            if (num % 2 == 0) {
                zero++; 
            }
            else {
                one++;
            }
            num = num / 2;
        }
        
        cout << zero << " " << one << endl;
        
    }
}



