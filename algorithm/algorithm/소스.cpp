#include<iostream>
#include<fstream>


using namespace std;

int main() {


	/*
	*  cin을 반복해서 돌려도 버퍼에 있으니까 한번에 들어감
	*  int형의 가장 작은 수  : -2147000000
	*  int형의 가장 큰 수 : 2147000000
	*/
	// N명의 나이중에 가장 나이차이 많이 나는 경우

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/
	// 변수
	int n, min = 1000, max = 0, age;

	// 입력
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> age;
		if (min > age) { min = age; }
		if (max < age) { max = age; }
	}

	cout << max - min << endl;

	return 0;
}