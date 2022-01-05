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

	int n, m, ai = 0, bi = 0, tmp, j;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		tmp = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp > a[j]) break;
			else a[j + 1] = a[j];
		}
		a[j + 1] = tmp;
	}

	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
		tmp = b[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp > b[j]) break;
			else b[j + 1] = b[j];
		}
		b[j + 1] = tmp;
	}

	while (true) {
		
		if (a[ai] == b[bi]) {
			printf("%d ", a[ai]);
			ai++;
			bi++;
		}
		else if (a[ai] > b[bi]) {
			bi++;
		}
		else if (a[ai] < b[bi]){
			ai++;
		}

		if (ai >= n || bi >= m) break;

	}


	return 0;
}

