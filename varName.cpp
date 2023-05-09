#include <iostream>

using namespace std;

int main() {
	int testCases;

	cin >> testCases;

	for (int i = 0; i < testCases; i++) {
		
		string str;
		int ans = 1;

		cin >> str;

		if (48 <= str[0] && str[0] <= 57) {
			ans = 0;
		}
		else {

			for (int k = 0; k < str.length(); k++) {
				if ((65 <= str[k] && str[k] <= 90) || (97 <= str[k] && str[k] <= 122) || (48 <= str[k] && str[k] <= 57) || str[k] == 95) {
					continue;

				}
				else {
					ans = 0;
					break;
				}
			}
		}
		cout << ans << endl;

	}

}