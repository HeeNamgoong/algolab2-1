/*************************************************************************
*                                                                        *
* Problem:                                                               *
* k번째 숫자                                                             *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 소프트웨어융합대학 소프트웨어학부 2 학년                    *
* 20223068 남궁희                                                        *
*                                                                        *
*************************************************************************/

/* 이게 찐
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
        num = pow(10, digits-1); // digit 자리수를 가진 수 중 가장 작은 수


        num += (n - 1) / digits; // n이 포함하고 있는 수
        string s = to_string(num); 
        cout << s[(n - 1) % digits] << endl; // digit과 같거나 작은 자리 수 중 n의 자리수 찾기
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
        while (len < n) { // n번째 수를 찾을 때까지 반복
            len += to_string(num).length(); // 다음 수의 길이를 더해줌
            num++; // 다음 수로 이동
        }

        // n번째 수의 시작 위치부터 n번째 자리까지의 문자열을 추출
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

