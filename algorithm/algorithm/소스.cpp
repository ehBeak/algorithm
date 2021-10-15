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
	char str[100]; // 문자열 저장
	int num = 0; // 숫자 저장
	//int digit = 1;
	int count = 0;

	// 입력
	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 48) && (str[i] <= 57)) {
			num = num * 10 + (str[i] - 48);
		}
	}
	/*for (int i = 20; i > 0; i--) {
		if (str[i] >= 48 && str[i] <= 57) {
			num += digit * (str[i] - 48);
			digit *= 10;
		}
	}*/

	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			count++;
		}
	}

	// 출력
	printf("%d\n", num);
	printf("%d", count);

	return 0;
}