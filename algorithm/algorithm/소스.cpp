#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;


int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	char a[101];
	int b[10] = { 0, };
	int maxCount = 0, maxNum = 0;

	gets_s(a);



	for (int i = 0; a[i] != '\0'; i++) {
		b[(a[i] - 48)]++;
	}

	/*for (int i = 0; i<10; i++) {
		printf("\n%d", b[i]);
	}*/

	for (int i = 0; i < 10; i++) {
		if (maxCount <= b[i]) {
			maxNum = i;
			maxCount = b[i];
		}else if (maxCount == b[i]) {
			if (maxNum < i) maxNum = i;
		}
	}

	printf("%d", maxNum);

	return 0;
}