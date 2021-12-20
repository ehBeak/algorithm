#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int cnt, res;
	int a[100];
	int b[100];

	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < cnt; i++) {
		scanf("%d", &b[i]);
	}


	for (int i = 0; i < cnt; i++) {
		res = a[i] - b[i];
		if (res == 0) printf("D\n");
		if (res == 2 || res == -1)printf("B\n");
		if (res == -2 || res == 1)printf("A\n");
	}
	
	return 0;
}