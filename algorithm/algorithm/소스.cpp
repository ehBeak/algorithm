#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<fstream>


using namespace std;

int main() {


	// ���� �Է�
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	// ����
	char str[100]; // ���ڿ� ����
	int num = 0; // ���� ����
	//int digit = 1;
	int count = 0;

	// �Է�
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

	// ���
	printf("%d\n", num);
	printf("%d", count);

	return 0;
}