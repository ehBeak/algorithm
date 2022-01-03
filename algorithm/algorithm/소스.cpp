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

	int an, bn, ai = 0, tmp;

	scanf("%d", &an);
	vector<int> a(an);
	for (int i = 0; i < an; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &bn);

	scanf("%d", &tmp);
	for (int i = 0; i < bn + an; i++) {
		if (ai < an && a[ai] <= tmp) printf("%d ", a[ai++]);
		else{
			printf("%d ", tmp);
			if (i < bn + an - 1) scanf("%d", &tmp);
		}
	}
	
	return 0;
}

