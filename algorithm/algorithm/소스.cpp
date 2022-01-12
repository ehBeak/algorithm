#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;
int a[1001], n;

int count(int s) {
	int sum = 0, cnt = 1;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] > s) {
			sum = a[i];
			cnt++;
		}
		else {
			sum += a[i];
		}
	}

	return cnt;
}

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int m, res, lt = 1, rt = 0, mid, max = -2147000000;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		rt += a[i];
		if (a[i] >= max) max = a[i];
	}

	while (lt <= rt) {
		mid = (rt + lt) / 2;

		if (mid >= max && count(mid) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else {
			lt = mid + 1;
		}

	}

	printf("%d", res);
	

	return 0;
}

