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

	int n, cnt = 2, plus, n_sub, res = 0;

	scanf("%d", &n);

	while (true) {

		n_sub = n;
		for (int i = cnt; i > 0; i--) n_sub -= i;
		
		if (n_sub < 0) break;

		if (n_sub % cnt == 0) {
			plus = n_sub / cnt;
			res++;
			for (int i = 1; i < cnt; i++) {
				printf("%d + ", i + plus);
			}
			printf("%d = %d\n", cnt + plus, n);
		}
		cnt++;
	}
	
	printf("%d", res);

	return 0;
}

