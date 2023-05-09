/*************************************************************************
*                                                                        *
* Problem:                                                               *
* �� ������ �����ϴ� ���� ���ϱ�                                         *
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
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        int overlapped = 0, length = 0;

        if (a < c && c < b && b < d) {
            overlapped = b - c;
            length = d - a;
        }
        else if (c < a && a < d && d < b) {
            overlapped = d - a;
            length = b - c;
        }
        else if ((b <= c) or (d <= a)) {
            overlapped = 0;
            length = (b - a) + (d - c);
        }
        else if(a < c && c < d && d < b) {
            overlapped = d - c;
            length = b - a;
        }
        else {
            overlapped = b - a;
            length = d - c;
        }
        
        cout << overlapped << " " << length << endl;
    }
}