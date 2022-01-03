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

	int an, bn, ai = 0, bi = 0;

	scanf("%d", &an);
	vector<int> a(an);
	for (int i = 0; i < an; i++) {
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &bn);
	vector<int> b(bn);
	for (int i = 0; i < bn; i++) {
		scanf("%d", &b[i]);
	}

	while (ai < an && bi < bn) {
		if (a[ai] < b[bi]) printf("%d ", a[ai++]);
		else printf("%d ", b[bi++]);
	}

	while (bi < bn)printf("%d ", b[bi++]);
	while (ai < an)printf("%d ", a[ai++]);
	
	return 0;
}

