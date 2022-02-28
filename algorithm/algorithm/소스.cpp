#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
	int n, k, sum = 0;
	
	scanf("%d", &n);
	vector<int> works(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &works[i]);
		sum += works[i];
	}
	scanf("%d", &k);

	if (k >= sum) {
		printf("%d", -1);
		return 0;
	}

	int j = -1;
	while (true) {
		j++;
		if (j == n) j = 0;
		if (works[j] == 0) continue;

		works[j]--;
		
		if (k == 0) {
			printf("%d", j + 1);
			break;
		}
		else {
			k--;
		}

	}

	return 0;
}

