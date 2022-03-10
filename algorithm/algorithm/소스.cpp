#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int H, W, h, w, sum = 0, res = 0;
	scanf("%d %d", &H, &W);

	vector<vector<int>> arr(H+1, vector<int>(W+1));
	vector<vector<int>> dy(H+1, vector<int>(W+1));

	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &h, &w);

	
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			dy[i][j] = arr[i][j] + dy[i][j - 1] + dy[i - 1][j] - dy[i - 1][j - 1];
		}
	}

	for (int i = h; i <= H; i++) {
		for (int j = w; j <= W; j++) {
			sum = dy[i][j] - dy[i][j - w] - dy[i - h][j] + dy[i - h][j - w];
			if (res < sum)res = sum;
		}
	}

	printf("%d", res);

	return 0;
}

