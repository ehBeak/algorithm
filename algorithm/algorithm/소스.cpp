#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int a[200000], pre, now, n, c;

int count(int mid) {
	int cnt = 1;
	pre = a[0];

	for (int i = 1; i < n; i++) {
		now = a[i];
		if (now - pre >= mid) {
			pre = a[i];
			cnt++;
		}
	}
	return cnt;
}

int main() {

	int lt = 0, rt, mid, res;
	scanf("%d %d", &n, &c);
	
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	sort(a, a + n);
	rt = a[n - 1];

	while (lt <= rt) {

		mid = (lt + rt) / 2;

		if (count(mid) >= c) {
			res = mid;
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	printf("%d", res);
	return 0;
}

