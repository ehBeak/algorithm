#include<iostream>

using namespace std;

int main() {

	/// <summary>
	/// int n, m, i, sum = 0;
	/// 
	/// cin >> n >> m;
	/// 
	/// sum += i; 누적
	/// 
	/// cout<<sum;
	/// 
	/// </summary>
	/// <returns></returns>

	int n; // n까지
	int m; // m의 배수만

	int sum = 0; // 배수합

	// 입력
	cin >> n;
	cin >> m;

	for (int i = 1; i < n + 1; i++) {

		// m의 배수인지 확인
		if (i % m == 0) {
			// m의 배수면 더하기
			sum += i; 
		}

	}

	// 출력
	cout << sum << endl;
	return 0;
}