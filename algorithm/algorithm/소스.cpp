#include<iostream>

using namespace std;

int main() {

	/* cin >> a, cin >> b */
	// 자연수의 합
	// 변수
	int a, b;
	int sum = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++) {

		if (i != b) {
			cout << i << " + ";
		}
		else {
			cout << i << " = ";
		}
		sum += i;

	}
	cout << sum;

	/*
	#### 풀이 ####
	1. a,b,i,sum을 미리 선언
	2. for문에는 +만, sum더하기
	3. 맨 마지막에는 i = 을 출력하고 sum+i출력
	*/

	return 0;
}