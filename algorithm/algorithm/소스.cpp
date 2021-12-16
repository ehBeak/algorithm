#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>

using namespace std;

// 16. Anagram(아나그램 : 구글 인터뷰 문제)
int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int num;
	int q[10], res[10], real_res[10];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &q[i]);
		scanf("%d", &res[i]);
	}

	for (int i = 0; i < num; i++) {
		real_res[i] = (q[i] * (q[i] + 1)) / 2;
		if (res[i] == real_res[i]) printf("YES\n");
		else printf("NO\n");
	}



	return 0;
}