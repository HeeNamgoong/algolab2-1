/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 숫자 정사각형 달팽이 모양 출력하기                                      *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 소프트웨어융합대학 소프트웨어학부 2 학년                    *
* 20223068 남궁희                                                        *
*                                                                        *
*************************************************************************/


/*
#include <iostream>
using namespace std;

int main() {

    int numTestCase, n, a, b;
    cin >> numTestCase;

    for (int i = 0; i < numTestCase; i++) {
        cin >> n >> a >> b;

        int m = n;
        int p = 0, cnt = 0;

        for (int i = 0; i < n * 2 - 1; i++) {
            
            for (int k = 0; k < m; k++) {
                if (i % 4 == 0) {
                    cnt++;
                }
                else if (i % 4 == 1) {
                    cnt += n;
                }
                else if (i % 4 == 2) {
                    cnt--;
                }
                else {
                    cnt -= n;
                }

                p++;

                if (p >= a && p <= b)
                    cout << cnt << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}


*/


#include <iostream>
using namespace std;
int main()
{
    int numTestCase;
    cin >> numTestCase;
    for (int i = 0; i < numTestCase; i++)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int tmp = 0;
        int num = 0;
        int flag = 0;

        for (int i = 0; i < n; i++) {
            num++;
            tmp++;
            if (tmp == b + 1) {
                break;
            }
            if (tmp >= a) {
                cout << num << ' ';
            }
        }

        flag++;
        for (int i = n - 1; i > 0; i--) {
            for (int k = 0; k < 2; k++) {
                for (int j = 0; j < i; j++) {
                    if (flag % 4 == 0) {
                        num++;
                        tmp++;
                    }
                    else if (flag % 4 == 1) {
                        num += n;
                        tmp++;
                    }
                    else if (flag % 4 == 2) {
                        num--;
                        tmp++;
                    }
                    else {
                        num -= n;
                        tmp++;
                    }
                    if (tmp == b + 1) {
                        break;
                    }
                    if (tmp >= a) {
                        cout << num << ' ';
                    }
                }
                if (tmp == b + 1) {
                    break;
                }
                flag++;
            }
            if (tmp == b + 1) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}