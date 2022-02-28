#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
	int n, p, cnt = 0;
	scanf("%d", &n);
	vector<vector<int>> map(n + 2, vector<int>(n + 2));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			p = map[i][j];
			if (p > map[i - 1][j] && p > map[i + 1][j]
				&& p > map[i][j - 1] && p > map[i][j + 1]) {
				cnt++;
				j++;
			}
		}
	}
	
	printf("%d", cnt);

	return 0;
}

