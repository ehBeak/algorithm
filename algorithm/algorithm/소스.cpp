#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<fstream>


using namespace std;

int main() {


	// ���� �Է�
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	// ����
	char a[31];
	int cnt = 0;

	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt++;
		}
		else if (a[i] == ')') {
			cnt--;
		}

		if (cnt < 0) break;
	}
	
	if (cnt != 0) printf("NO");
	else printf("YES");

	return 0;
}