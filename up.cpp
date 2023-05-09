#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

/*
void solve(int data[], int n) {

	int cnt = 0;
	int flag = 1;
	int sum = 0;


	/*for (int i = 0; i < n; i++) {

		if (data[i] <= data[i + 1]) {
			flag = 1;
		} 
		else {
			flag = 0; 
		}

		if (flag == 1) {
			if (data[i] <= data[i + 1]) {
				flag = 1;
				sum += data[i];
			}
			else {
				flag = 0;
				cnt++;
				sum += data[i];
			}
			
		}
		else {
			continue;
		}

	}*/

	/*
	for (int i = 0; i < n; i++) {
		

		if (data[i] <= data[i + 1]) {
			flag = 1;
			sum += data[i];
		}
		else {
			flag = 0;
			cnt++;
			sum += data[i];
		}

		if (flag == 0) {

		}
		
	}
	

	int current = 0;
	for (int i = 0; i < n; i++) {


		if (data[i] <= data[i + 1]) {
			sum += data[i];
			current++;
		}
		else {
			cnt++;
			sum += data[i];
			current = 0;
		}

		if (current > 1) {


		}

	}




	cout << cnt << " " << sum << endl;

}

*/

/*
void solve(int data[], int n) {
	int cnt = 0;
	int sum = 0;
	int start = 0;
	int end = 0;
	for (int i = 1; i < n; i++) {
		if (data[i - 1] <= data[i]) {
			end++;
		}
		else {
			if (end - start >= 1) { // 최소 길이는 2여야 오름차순으로 처리
				cnt++;
				for (int j = start; j <= end; j++) {
					sum += data[j];
				}
			}
			start = i;
			end = i;
		}
	}
	if (end - start >= 1) { // 마지막 연속 구간 처리
		cnt++;
		for (int j = start; j <= end; j++) {
			sum += data[j];
		}
	}
	cout << cnt << " " << sum << endl;
}
*/





int main()
{
	int numTestCases;
	int data[MAX_SIZE], size;
	cin >> numTestCases;
	for (int i = 0; i < numTestCases; i++)
	{
		cin >> size;
		for (int i = 0; i < size; i++)
			cin >> data[i];
		solve(data, size);
	}
	return 0;
}
