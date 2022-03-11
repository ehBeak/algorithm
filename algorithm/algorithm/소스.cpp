#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {

	int n, p2, p3, p5, min = 214700000;
	scanf("%d", &n);
	vector<int> a(n, 1);

	p2 = p3 = p5 = 0;
	for (int i = 1; i < n; i++) {


		if (a[p2] * 2 < a[p3] * 3) min = a[p2] * 2;
		else min = a[p3] * 3;
		if (a[p5] * 5 < min)min = a[p5] * 5;


		if (a[p2] * 2 == min) p2++;
		if (a[p3] * 3 == min) p3++;
		if (a[p5] * 5 == min) p5++;

		a[i] = min;
	}

	printf("%d", a[n-1]);

	return 0;
}

