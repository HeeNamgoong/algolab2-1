/*************************************************************************
*                                                                        *
* Problem:                                                               *
* k��° ����                                                             *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����Ʈ�������մ��� ����Ʈ�����к� 2 �г�                    *
* 20223068 ������                                                        *
*                                                                        *
*************************************************************************/

/* �̰� ��
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int n;
        cin >> n;

        int digits = 1;
        long long cnt = 9;
        while (n > cnt * digits) {
            n -= cnt * digits;
            digits++;
            cnt *= 10;
        }

        int num = 1;
        num = pow(10, digits-1); // digit �ڸ����� ���� �� �� ���� ���� ��


        num += (n - 1) / digits; // n�� �����ϰ� �ִ� ��
        string s = to_string(num); 
        cout << s[(n - 1) % digits] << endl; // digit�� ���ų� ���� �ڸ� �� �� n�� �ڸ��� ã��
    }

    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; i++) {
        int n;
        cin >> n;
        string str = "";
        int ans = 0;

        if (n <= 9) { 
            cout << n << endl;
            continue;
        }

        int len = 0;
        int num = 1;
        while (len < n) { // n��° ���� ã�� ������ �ݺ�
            len += to_string(num).length(); // ���� ���� ���̸� ������
            num++; // ���� ���� �̵�
        }

        // n��° ���� ���� ��ġ���� n��° �ڸ������� ���ڿ��� ����
        str = to_string(num - 1);
        int start = len - to_string(num - 1).length();
        str = str.substr(n - start - 1, 1);

        ans = stoi(str);

        cout << ans << endl;
    }
}

*/

#include <iostream>
#include <cstring>
using namespace std;

int strcmp(const char* t, const char* s)
{
    for (; *t == *s; t++, s++)
        if (*t == '\0')
            return 0;
    return *t - *s;
}



int main()
{
    char word1[] = "computer";
    char word2[] = "computee";
    cout << strcmp(word1, word2) << endl;
}

