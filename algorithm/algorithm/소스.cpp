#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;

int main() {

	// ���� �Է�
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/
	
	char a[10];
	int c = 0, h = 0, i, pos, res;
	gets_s(a);

	//2�ڸ� 12+1 = 13
	//3�ڸ� - C���� H�� �ٷο� �� 12 + 1*b
	//		- C���� ���ڰ� �� �� 12*a + 1
	//4�ڸ� 12*a + 1*b
	if (a[1] == 'H') {
		c = 1;
		pos = 1;
	}
	else {
		for (i = 1; a[i] != 'H'; i++) {
			c = c * 10 + (a[i] - 48);
		}
		pos = i;
	}

	if (a[pos + 1] == '\0') {
		h = 1;
	}
	else {
		for (i = pos + 1; a[i] != '\0'; i++) {
			h = h * 10 + (a[i] - 48);
		}
	}
	printf("%d", c * 12 + h);
	return 0;
}

