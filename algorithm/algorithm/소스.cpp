#include<iostream>

using namespace std;

int main() {

	/// <summary>
	/// int n, m, i, sum = 0;
	/// 
	/// cin >> n >> m;
	/// 
	/// sum += i; ����
	/// 
	/// cout<<sum;
	/// 
	/// </summary>
	/// <returns></returns>

	int n; // n����
	int m; // m�� �����

	int sum = 0; // �����

	// �Է�
	cin >> n;
	cin >> m;

	for (int i = 1; i < n + 1; i++) {

		// m�� ������� Ȯ��
		if (i % m == 0) {
			// m�� ����� ���ϱ�
			sum += i; 
		}

	}

	// ���
	cout << sum << endl;
	return 0;
}