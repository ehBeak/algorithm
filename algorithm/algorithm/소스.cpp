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

	int n, m, idx = 0, tmp, cnt = 0, j;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);

	vector<int> res(m + n - 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				res[cnt++] = a[i];
				break;
			}
		}
	}
	
	for (int i = 1; i < cnt; i++) {
		tmp = res[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp < res[j]) res[j + 1] = res[j];
			else break;
		}
		res[j + 1] = tmp;
	}

	for (int i = 0; i < cnt; i++) printf("%d ", res[i]);
	
	
	return 0;
}

