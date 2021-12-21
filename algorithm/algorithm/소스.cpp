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

	int n, tmp = 1, res = 0;

	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n-1; i++) {
		if (a[i] <= a[i + 1]) tmp++;
		else {
			if (tmp > res) res = tmp;
			tmp = 1;
		}
	}
	if (tmp == n) res = tmp;

	printf("%d", res);
	return 0;
}
