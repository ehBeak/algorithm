#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<fstream>


using namespace std;

int reverse(int x) { // 32 -> 23
	int b = 0, digit = 1;

	char a[100001];

	//32
	for (int i = 0; x != 0; i++) {
		a[i] = x % 10;
		x = x / 10;
		digit *= 10; 
	}


	for (int i = 0; digit != 0; i++) {
		digit /= 10;
		b += (a[i]) * digit;
	}

	//int tmp;

	//1234
	//while (x > 0) {
	//	tmp = x % 10; // 4 3
	//	b = b * 10 + tmp; // 4 43 
	//	x /= 10; // 123

	//}

	return b;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i < (x / 2) ; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n;
	int a[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) { // 입력 ok
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++) {
		a[i] = reverse(a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (isPrime(a[i]) == true) printf("%d ", a[i]);
	}
	

	


	

	return 0;
}