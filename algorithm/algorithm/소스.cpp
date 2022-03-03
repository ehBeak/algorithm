#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int H, W, h, w, sum = 0, res = 0;
	scanf("%d %d", &H, &W);

	vector<vector<int>> arr(H, vector<int>(W));

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d %d", &h, &w);

	for (int i = 0; i < H-h+1; i++) {
		for (int j = 0; j < W-w+1; j++) {

			for (int x = j; x < w+j; x++) {
				for (int y = i; y < h+i; y++) {
					sum += arr[y][x];
				}
			}
			if (sum > res)res = sum;
			sum = 0;
			
		}
	 }
	
	printf("%d", res);

	return 0;
}

