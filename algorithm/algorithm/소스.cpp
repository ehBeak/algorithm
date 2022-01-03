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


	//(ai != an) && (bi != bn)
	while (true) {
		if (a[ai] < b[bi]) {
			printf("%d ", a[ai]);
			if (ai != an-1) ai++; 
			else {
				a[ai] = 101;
			}
		}
		else {
			printf("%d ", b[bi]);
			if (bi != bn-1) bi++;
			else {
				b[bi] = 101;
			}
		}
		if ((ai == an-1) && (bi == bn-1)) break;
	}
	
	
	if (b[bi] != 101 && a[ai] != 101) {
		if (b[bi] < a[ai]) printf("%d %d", b[bi], a[ai]);
		else printf("%d %d", a[ai], b[bi]);
	}
	else {
		if (b[bi] == 101) printf("%d ", a[ai]);
		if (a[ai] == 101) printf("%d ", b[bi]);
	}
	
	return 0;
}

