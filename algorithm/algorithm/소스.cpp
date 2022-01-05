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

	int n, m, ai = 0, bi = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
	while (ai < n && bi < m) {
		
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

	}


	return 0;
}

