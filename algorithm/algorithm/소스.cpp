#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;


int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, b = 1, res = 0;

	scanf("%d", &n);

	// abcd
	//(abcd) + (abcd - (9)) + (abcd - 99) + (abcd - 999);

	while (n / b != 0) {
		res += (n - (b - 1));
		b *= 10;
	}

	printf("%d", res);

	return 0;
}