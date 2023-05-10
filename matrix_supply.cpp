#include <iostream>

using namespace std;

int main() {

	int testCases;
	cin >> testCases;

	for (int i = 0; i < testCases; i++) {

		int r, s, t;
		cin >> r >> s >> t;

		int matrix1[r][s];
		int matrix2[s][t];

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < s; j++) {
				cin >> matrix1[i][j];
			}
		}
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < t; j++) {
				cin >> matrix2[i][j];
			}
		}

		int num = 0;
		int ls[t];
		int ans[r][t];
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < t; j++) {
				num = 0;
				for (int k = 0; k < s; k++) {
					num += matrix1[i][k] * matrix2[k][j];
				}
				ans[i][j] = num;
			}

		}

		for (int p = 0; p < r; p++) {
			for (int q = 0; q < t; q++) {
				cout << ans[p][q] << " ";
			}
			cout << endl;
		}
	}
}
