#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<fstream>


using namespace std;

int main() {


	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	// 변수
	char a[31];
	int cnt = 0;

	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt++;
		}
		else if (a[i] == ')') {
			cnt--;
		}

		if (cnt < 0) break;
	}
	
	if (cnt != 0) printf("NO");
	else printf("YES");

	return 0;
}