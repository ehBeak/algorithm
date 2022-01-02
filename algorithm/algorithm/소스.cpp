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

	int n, pos;
	scanf("%d", &n);
	vector<int> is(n);
	vector<int> os(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &is[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		pos = i;
		for (int j = 0; j < is[i]; j++) {
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = i + 1;
	}
	for (int i = 0; i < n; i++)printf("%d ", os[i]);

	return 0;
}

