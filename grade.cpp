/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 성적                                                                   *
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
        int gradeA = 0;
        int gradeB = 0;
        int gradeC = 0;
        int gradeD = 0;
        int gradeF = 0;

        cin >> count;

        for (int i = 0; i < count; i++) {
            cin >> num;

            if (num >= 90) {
                gradeA++;
            }
            else if (num >= 80) {
                gradeB++;
            }
            else if (num >= 70) {
                gradeC++;
            }
            else if (num >= 60) {
                gradeD++;
            }
            else {
                gradeF++;
            }

        }

        cout << gradeA << " " << gradeB << " " << gradeC << " " << gradeD << " " << gradeF << endl;
    }
}