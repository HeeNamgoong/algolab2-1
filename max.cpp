/*************************************************************************
*                                                                        *
* Problem:                                                               *
* �־��� ������ �ִ��ּ� ���ϱ�                                                *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����Ʈ�������մ��� ����Ʈ�����к� 2 �г�                    *
* 20223068 ������                                                        *
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