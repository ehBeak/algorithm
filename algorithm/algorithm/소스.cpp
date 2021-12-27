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

	int n, j, tmp;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 2; i < n+1; i++) {
		tmp = i;
		j = 2;
		while (tmp > 1) {
			if (tmp % j == 0) {
				a[j - 1]++;
				tmp = tmp / j;
			}else {
				j++;
			}
		}
	}
	
	if (a[1] > a[4]) printf("%d", a[4]);
	else printf("%d", a[1]);

	return 0;
}

