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
	
	int n, idx, tmp, cnt = 0;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	for (int i = 0; i < n - 1; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[idx])idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}


	for (int i = 1; i < n; i++) {
		if (a[i-1] != a[i]) cnt++;
		if (cnt == 2) {
			printf("%d", a[i]);
			break;
		}
	}


	return 0;
}

