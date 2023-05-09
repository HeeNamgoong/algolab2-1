#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {

        int numbers[101] = { 0 };
        int num, max_count = 0, max_num = 0;

        while (true) {
            cin >> num;
            if (num == 0) break;

            if (num >= 1 && num <= 100) {
                numbers[num]++;
                if (numbers[num] > max_count) {
                    max_count = numbers[num];
                    max_num = num;
                }
                else if (numbers[num] == max_count) {
                    max_num = max(max_num, num);
                }
            }
        }

        cout << max_num << endl;
    }
}