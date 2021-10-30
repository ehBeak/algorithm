#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, cnt = 0;

	scanf("%d", &n);
	cnt = n - 1;

	// 20
	for (int i = n; i > 2; i--) { 
		for (int j = 2; j*j <= i; j++) { 
			if (i % j == 0) {
				cnt--;
				break;
			}
		}

	 }


	
	printf("%d", cnt);

	return 0;
}