#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int a;
	int cnt[50001] = { 0, };

	scanf("%d", &a);


	for (int i = 1; i <= a; i++) {
		for (int j = i; j <= a; j = j + i) {
			cnt[j]++;
		}
	}

	for (int i = 1; i <= a; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}