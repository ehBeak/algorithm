#include<iostream>

using namespace std;

int main() {

	/* cin >> a, cin >> b */
	// �ڿ����� ��
	// ����
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
	#### Ǯ�� ####
	1. a,b,i,sum�� �̸� ����
	2. for������ +��, sum���ϱ�
	3. �� ���������� i = �� ����ϰ� sum+i���
	*/

	return 0;
}