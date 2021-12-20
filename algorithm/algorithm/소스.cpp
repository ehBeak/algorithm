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

	int a[10], b[10];
	int a_score = 0, b_score = 0;
	int res;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d", &b[i]);

		if (a[i] > b[i]) {
			a_score += 3;
			res = 1;
		}
		else if (a[i] < b[i]) {
			b_score += 3;
			res = 2;
		}
		else if (a[i] == b[i]) {
			a_score++; b_score++;
		}
	}
	

	printf("%d %d\n", a_score, b_score);

	if (a_score == b_score) {
		if (res == 0) printf("D");
		else if (res == 1) printf("A");
		else if (res == 2)printf("B");
	}
	
	if (a_score > b_score) printf("A");
	else printf("B");


	

	return 0;
}
