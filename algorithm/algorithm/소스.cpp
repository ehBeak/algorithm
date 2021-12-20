#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, i, cnt = 0, h[101], max;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &h[i]);
	}

	max = h[n];

	for (i = n - 1; i >= 1; i--) {
		if (h[i] > max) {
			max = h[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
	
	return 0;
}