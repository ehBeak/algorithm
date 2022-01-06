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

	int a, b = 1, cnt = 0, tmp;
	scanf("%d", &a);

	tmp = a;

	a--;
	while (a > 0) {
		b++;
		a -= b;
		if (a % b == 0) {
			for (int i = 1; i < b; i++) {
				printf("%d + ", i + (a / b));
			}
			printf("%d = %d\n", b + (a / b), tmp);
			cnt++;
		}
	}

	printf("%d", cnt);
	return 0;
}

