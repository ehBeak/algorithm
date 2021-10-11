#include<iostream>

using namespace std;

int main() {
	/*
	* 
	*/
	// 자연수 n이 주어지면 자연수 n의 진약수의 합을 수식과 함께 출력
	// 변수
	int n, i = 1, sum = i;

	// 입력
	cin >> n;

	cout << i++;
	for (i ; i < n; i++) {
		if (n % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	}

	cout << " = " << sum;
	return 0;
}