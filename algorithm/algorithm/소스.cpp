#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, sum, res = 0;
	scanf("%d", &n);
	for (int i = n / 2; i > 0; i--) {
		sum = 0;
		for (int j = i; sum < n + 1; j++) {
			sum += j;
			if (sum == n) {
				res++;
				for (int k = i; k < j; k++) printf("%d + ", k);
				printf("%d = %d\n", j, n);
				break;
			}
		}
	}

	printf("%d", res);
	
	return 0;
}

