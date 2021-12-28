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
	int n, cur, lt = 1, rt, k = 1, res = 0;
	scanf("%d", &n);
	
	while (lt != 0) {
		lt = n / k / 10;
		cur = (n / k) % 10;
		rt = n % k;
		
		//printf("lt: %d, cur: %d, rt: %d\n", lt, cur, rt);

		if (cur == 3) res += lt * k + rt + 1;
		else if (cur > 3) res += (lt + 1) * k;
		else if (cur < 3) res += lt * k;

		//printf("res : %d\n", res);

		k *= 10;
	}

	printf("%d", res);

	

	return 0;
}

