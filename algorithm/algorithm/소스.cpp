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

	int n, tmp, j;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (tmp != 1) {
			if (tmp % j == 0) {
				tmp = tmp / j;
				a[j - 1]++;
			}
			else {
				j++;
			}
		}
		
	}
	printf("%d! = ", n);

	for (int i = 0; i < n; i++) {
		if (a[i] != 0) printf("%d ", a[i]);
	}

	return 0;
}

