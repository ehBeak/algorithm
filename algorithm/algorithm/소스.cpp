#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<fstream>


using namespace std;

int main() {


	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	// 변수
	char a[101], b[101];
	int pos = 0;

	gets_s(a);

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			b[pos++] = a[i] + 32;
		} else if (a[i] >= 97 && a[i] <= 122) {
			b[pos++] = a[i];
		}
	}
	b[pos] = '\0';
	printf("%s", b);

	return 0;
}