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

	int n, tmp, cnt = 0;
	scanf("%d", &n);

	//1234 123
	for (int i = 1; i < n + 1; i++) {
		tmp = i;
		while (tmp > 1) {
			if (tmp % 10 == 3) cnt++;
			tmp = tmp/10;
		}
	}
	printf("%d", cnt);
	return 0;
}

