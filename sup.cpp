/*************************************************************************
*                                                                        *
* Problem:                                                               *
* ������ ��� �ڸ��� �ݺ� ���ϱ�                                         *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����Ʈ�������մ��� ����Ʈ�����к� 2 �г�                    *
* 20223068 ������                                                        *
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