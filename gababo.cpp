/*************************************************************************
*                                                                        *
* Problem:                                                               *
* ���������� ����                                                        *
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

        int count, num;
        int ans = 0;
        int rock = 0;
        int scissors = 0;
        int papper = 0;

        cin >> count;

        for (int i = 0; i < count; i++) {
            cin >> num;
            if (num == 1) {
                scissors++;
            }
            else if (num == 2) {
                rock++;
            }
            else {
                papper++;
            }

        }


        if (rock > 0 && scissors > 0 && papper > 0) {
            ans = 0;
        }
        else if (rock == 0 && scissors != 0 && papper != 0) {
            ans = scissors;
        }
        else if (scissors == 0 && rock != 0 && papper != 0) {
            ans = papper;
        }
        else if (papper == 0 && rock != 0 && scissors != 0) {
            ans = rock;
        } 
        else {
            ans = 0;
        }

        cout << ans << endl;
    }
}