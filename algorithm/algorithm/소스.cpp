#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int n;


int count(int mid, int a[]) {
	int cnt = 1, pre;
	pre = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] - pre >= mid) {
			pre = a[i];
			cnt++;
		}
	}
	return cnt;
}

int main() {
	int c, lt = 0, rt, mid, res;
	scanf("%d %d", &n, &c);
	int* a = new int[n + 1];
	
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	rt = a[n - 1];

	while (lt <= rt) {

		mid = (lt + rt) / 2;

		if (count(mid, a) >= c) {
			res = mid;
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	printf("%d", res);
	delete[] a;
	return 0;
}

