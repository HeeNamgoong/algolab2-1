/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 주가분석 - 1                                                           *
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
#include <algorithm>
using namespace std;

int main() {

    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {

        int n, num;
        cin >> n;

        int arr[n]{};
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> num;
            arr[i] = num;
        }
        cout << arr.length << endl;
        int j = 0;
        for (int k = 0; k < n - 1; k++) {
            if (arr[j] == arr[j+1]) {
                arr.erase(arr[j + 1]);
            }
            else {
                j += 1;
            }
        }

        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                cnt += 1;
            }
        }

        cout << arr.length << endl; 
       
    }
}

*/



#include <iostream>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; i++) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int cnt = 0;
        int num;
        if (a < b && b > c)
            cnt++;

        for (int i = 0; i < n - 3; i++) {
            cin >> num;

            if (num == c) {
                continue;
            }
            else {
                a = b, b = c, c = num;
                if (a < b && b > c) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}