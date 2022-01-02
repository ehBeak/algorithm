#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<fstream>

using namespace std;

int main() {

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/

	int n, tmp;
	scanf("%d", &n);
	vector<int> a(n);
	vector<int> res(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		tmp = a[i];
		for (int j = n - 1; j > tmp; j--) { 
			res[j] = res[j-1]; 
		}
		res[tmp] = i + 1;
	}

	for (int i = 0; i < n; i++)printf("%d", res[i]);

	return 0;
}

