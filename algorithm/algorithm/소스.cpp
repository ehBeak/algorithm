#include<iostream>
#include<fstream>


using namespace std;

int main() {


	/*
	*  cin�� �ݺ��ؼ� ������ ���ۿ� �����ϱ� �ѹ��� ��
	*  int���� ���� ���� ��  : -2147000000
	*  int���� ���� ū �� : 2147000000
	*/
	// N���� �����߿� ���� �������� ���� ���� ���

	// ���� �Է�
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/
	// ����
	int n, min = 1000, max = 0, age;

	// �Է�
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> age;
		if (min > age) { min = age; }
		if (max < age) { max = age; }
	}

	cout << max - min << endl;

	return 0;
}