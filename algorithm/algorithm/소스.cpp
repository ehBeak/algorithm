#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>

using namespace std;

// 18. 층간소음
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, m, res = 1, max = -1;
	int a[100] = { 0, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {

		if (a[i] > m) {
			
			if (a[i + 1] > m) res++;
			else {
				if (max < res) {
					max = res;
				}
				res = 1;
			}
		}
		
	}

	if (max == 0)printf("%d", -1);
	else printf("%d", max);

	return 0;
}