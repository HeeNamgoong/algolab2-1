#include <iostream>

using namespace std;

int main() {

	int testCases;

	cin >> testCases;

	for (int i = 0; i < testCases; i++) {

		int Y, M, D;
		int year = 0, month = 0, days = 0;
		int total = 0;

		int day_arr[7] = { 0, 1, 2, 3, 4, 5, 6 };

		cin >> Y >> M >> D;


		for (int i = 1; i < Y; i++) {
			if (((i % 4) == 0 && (i % 100) != 0) || ((i % 400) == 0)) {
				year += 366;
			}
			else {
				year += 365;
			}
		}


		for (int k = 1; k < M; k++) {
			if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) {
				month += 31;
			}
			else if (k == 4 || k == 6 || k == 9 || k == 11) {
				month += 30;
			}
			else {
				if (((Y % 4 == 0) && (Y % 100 != 0)) || ((Y % 400) == 0)) {
					month += 29;
				}
				else { 
					month += 28;
				}
			}
		}

		total += year + month + D;
		

		cout << day_arr[total % 7] << endl;




	}




}