#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	
	int n, k, tmp = 0, max = -2147483647;
	//int a[100000] = { 0, };

	scanf("%d %d", &n, &k);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < k; i++) {
		tmp += a[i];
	}
	max = tmp;

	for (int i = k; i < n; i++) {
		tmp = tmp + a[i] - a[i - k];
		if (tmp > max) max = tmp;
	}

	printf("%d", max);
	return 0;
}
