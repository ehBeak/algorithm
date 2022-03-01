#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int arr[9][9];

	int sum = 0, avg, res, min;

	for (int i = 0; i < 9; i++) {
		sum = 0;
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		avg = (sum / 9.0) + 0.5;
		min = 100;

		for (int j = 0; j < 9; j++) {
			if (abs(avg - arr[i][j]) < min) {
				min = abs(avg - arr[i][j]);
				res = arr[i][j];
			}
		}
		printf("%d %d\n", avg, res);
	}

	return 0;
}

