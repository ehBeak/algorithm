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

	int s, n, pos = -1, work;
	scanf("%d %d", &s, &n);
	vector<int> cache(s);

	for (int i = 0; i < n; i++) {
		scanf("%d", &work);

		for (int j = 0; j < s; j++) {
			if (cache[j] == work) {
				pos = j;
			}
		}

		if (pos == -1) {
			for (int j = s-2; j >= 0; j--) {
				cache[j + 1] = cache[j];
			}
		}
		else {
			for (int j = pos - 1; j >= 0; j--) {
				cache[j + 1] = cache[j];
			}
		}
		
		cache[0] = work;
		pos = - 1;
	}
	

	for (int j = 0; j < s; j++) printf("%d ", cache[j]);

	return 0;
}

