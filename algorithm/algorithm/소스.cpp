#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;

int digit_sum(int x) {
	/*int digit = 10000000;
	int sum = 0;
	for (int i = digit; i != 0; i = i / 10) {
		sum += (x / i);
		if (sum != 0) {
			x = x % i;
		}
	}*/

	int tmp, sum = 0;

	while (x > 0) {
		tmp = x % 10;
		sum += tmp;
		x / 10;
	}
	
	return sum;
}

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int a, b, sum;
	int max_sum = 0;
	int max_num = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);

		//printf("%d \n",digit_sum(b));
		sum = digit_sum(b);

		if (max_sum == sum) {
			if (max_num < b) max_num = b;
		}
		else if (max_sum < sum) {
			max_sum = sum;
			max_num = b;
		}
	}

	printf("%d", max_num);

	return 0;
}