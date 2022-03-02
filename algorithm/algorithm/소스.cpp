#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
	
	int n, cnt = -1, idx = 0, sum = 0;
	scanf("%d", &n);
	
	vector<vector<bool>> arr(n, vector<bool>(n, false));
	vector<int> front(n);
	vector<int> side(n);

	for (int i = 0; i < n; i++) scanf("%d", &front[i]);
	for (int i = 0; i < n; i++) scanf("%d", &side[i]);
	
	while (cnt < 10) {
		cnt++;
		for (int i = 0; i < n; i++) {
			if (front[i] == cnt) {
				for (int j = 0; j < n; j++) {
					if (arr[j][i] == false) {
						arr[j][i] = true;
						sum += cnt;
					}
				}
			}
		}
		
		for (int i = 0; i < n; i++) {
			if (side[i] == cnt) {
				for (int j = 0; j < n; j++) {
					if (arr[i][j] == false) {
						arr[i][j] = true;
						sum += cnt;
					}
				}
			}
		}
		
	}


	printf("%d", sum);
	return 0;
}

