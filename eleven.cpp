#include <iostream>
#include <string>

using namespace std;

/*
int main() {
	int testCases;

	cin >> testCases;

	for (int i = 0; i < testCases; i++) {
		
		int num;
		int copied_num;
		int ans = 0;
		cin >> num;

		int n = num;

		int sub = 1;

		num = num / 10;
		while (num != 0) {

		
			copied_num = num - sub;

			if (copied_num % 11 == 0) {
				num = num - sub;
			}
			else {
				break;
			}

			num = num / 10;
			sub++;
			
			cout << copied_num << endl;


		}

		if (num == 0) {
			ans = n / 11;
		}


		cout << ans << endl;

		//cout << 2147483657 / 11;


	}

}

*/





int main() {
	int testCases;
	cin >> testCases;

	for (int i = 0; i < testCases; i++) {

		string str;
		cin >> str;
		string copied_str = str;

		string ans = "";
		unsigned long long int sub = 1;
		int size = str.length();

		if (str.size() < 2) {
			cout << 0 << endl;
			continue;
		}

		int sum = 0;
		for (int i = 0; i < str.length(); i++) {
			int digit = str[i] - '0';
			if (i % 2 == 0) sum += digit;
			else sum -= digit;
		}

		if (sum % 11 != 0) {
			cout << 0 << endl;
			continue;
		}
		else {
			while (size > 3) {
				string str2 = "";
				sub = str[size - 1] - '0';

				int sum = 0;
				for (int i = 0; i < size; i++) {
					int digit = str[i] - '0';
					if (i % 2 == 0) sum += digit;
					else sum -= digit;
				}

				int num = 0;
				if (sum % 11 == 0) {
					str = str.substr(0, size - 1);
					size--;
					str2 = str.substr(size - 3, size);
					num = stoi(str2) - sub;
					str = str.substr(0, size - 3) + to_string(num);

				}
				else {
					break;
				}
			}

			while (size > 1) {
				sub = str[size - 1] - '0';

				int sum = 0;
				for (int i = 0; i < size; i++) {
					int digit = str[i] - '0';
					if (i % 2 == 0) sum += digit;
					else sum -= digit;
				}
				int num = 0;
				if (sum % 11 == 0) {
					str = str.substr(0, size - 1);
					num = stoi(str) - sub;
				}
				else {
					break;
				}

				str = to_string(num);
				size--;
			}

			long long res = 0;
			for (long long i = 0; i < copied_str.length(); i++) {
				res = (res * 10) + (copied_str[i] - '0');
				ans += (res / 11) + '0';
				res %= 11;
			}

			ans = ans.substr(1, copied_str.length());

			if (ans.substr(0, 1) == "0") {
				ans = ans.substr(1, copied_str.length());
			}
			
			cout << ans << endl;
		}

	}
}



