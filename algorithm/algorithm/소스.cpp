#include<iostream> // <stdio.h>
#include<fstream>
#include<string>


using namespace std;

int main() {

	 // "" : string, '':char
	/*
	* �Է� �ֹε�� ��ȣ
	* ��� ������ ����, ���� �Ǵ�
	*/
	// N���� �����߿� ���� �������� ���� ���� ���

	// ���� �Է�
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/
	// ����
	string no, first; // char a[20] string���ٴ� char �迭��
	char second;
	int age;
	// �Է�
	cin >> no; // scanf("%s", &a) // string���� a�� ������ ����

	second = no[7]; // 1900, 2000 ����
	
	if ((second == '1') || (second == '2')) { // 1900
		first = "19";
		// year = 1900 + ( (a[0]-48) * 10 + (a[1]-48)*1) // 48������ ������!!!
	}
	else if ((second == '3') || (second == '4')) { // 2000
		first = "20";
	}

	for (int i = 0; i < 2; i++) {
		first = first + no[i];
	}
	
	age = stoi(first);
	age = 2019 - age + 1;

	// printf("%d", age)

	if ((second == '1') || (second == '3')) {
		cout << age << " M" << endl;
		
	}
	else if ((second == '2') || (second == '4')) {
		cout << age << " W" << endl;
	}

	/*
	* 
	*/
	
	return 0;
}