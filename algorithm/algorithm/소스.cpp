#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
	int n, k, cnt = 0, cnt_i = 0, chk = 0;
	scanf("%d %d", &n, &k);
	vector<int> a(n);

	while (cnt < n-1) {
		if (chk == k - 1 && a[cnt_i] == 0) {
			a[cnt_i] = 1;
			chk = 0;
			cnt++;
		}
		if (a[cnt_i] == 0) {
			chk++;
		}
		cnt_i++;
		if (cnt_i == n) {
			cnt_i = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) printf("%d ", i + 1);
	}

	return 0;
}

