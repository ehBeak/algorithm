#include<iostream>

using namespace std;

int main() {
	/*
	* 
	*/
	// �ڿ��� n�� �־����� �ڿ��� n�� ������� ���� ���İ� �Բ� ���
	// ����
	int n, i = 1, sum = i;

	// �Է�
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