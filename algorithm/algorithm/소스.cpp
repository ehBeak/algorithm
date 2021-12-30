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
	
	int n, tmp, j;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// 11 7 5 6 10 9
	// 11 11
	for (int i = 1; i < n; i++) {
		tmp = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > tmp) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = tmp;
	}

	for (int i = 0; i < n; i++)printf("%d ", a[i]);

	return 0;
}

