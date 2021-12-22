#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n;
	scanf("%d", &n);
	vector<int> a(n);
	vector<int> b(n, 1);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) b[i]++;
		}
	}

	for (int i = 0; i < n; i++) printf("%d ", b[i]);

	return 0;
}
