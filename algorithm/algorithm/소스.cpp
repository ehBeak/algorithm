#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, tmp, res = 1, pre, now;
	scanf("%d", &n);
	vector<int> b(n - 1);
	scanf("%d", &pre);

	for (int i = 1; i < n; i++) {
		scanf("%d", &now);

		tmp = abs(pre - now);
		pre = now;

		if (tmp < n && b[tmp - 1] == 0) b[tmp - 1] = 1;
		else {
			printf("NO"); return 0;
		}
		pre = now;
	}
	printf("YES");
	return 0;
}
