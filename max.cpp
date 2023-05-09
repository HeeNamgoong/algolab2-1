/*************************************************************************
*                                                                        *
* Problem:                                                               *
* 주어진 정수의 최대최소 구하기                                                *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 소프트웨어융합대학 소프트웨어학부 2 학년                    *
* 20223068 남궁희                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {

        int count, num;
        
        cin >> count;

        int *arr = new int[count];


        for (int i = 0; i < count; i++) {
            cin >> num;
            arr[i] = num;

        }


        int ans_max = *max_element(arr, arr + count);
        int ans_min = *min_element(arr, arr + count);


        cout << ans_max << " " << ans_min << endl;
    }
}