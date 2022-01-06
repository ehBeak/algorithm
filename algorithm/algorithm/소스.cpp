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

	int n, key, lt = 0, rt, mid, tmp;
	scanf("%d %d", &n, &key);

	rt = n - 1;

	vector<int> a;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());

	while (lt <= rt) {
		mid = (lt + rt) / 2;

		if (a[mid] == key) {
			printf("%d", mid + 1);
			return 0;
		}
		else if (a[mid] > key) rt = mid - 1;
		else if (a[mid] < key) lt = mid + 1;
	}

	return 0;
}

