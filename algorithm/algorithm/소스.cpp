#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>

using namespace std;

int main() {
	char str[30];
	stack<char> stack;
	int i = -1, flag = 1;
	char tmp;
	
	gets_s(str);

	if (str[0] == ')') {
		printf("NO"); return 0;
	}

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') stack.push(str[i]);
		else {
			if (stack.empty()) {
				flag = 0;
				break;
			}
			stack.pop();
		}
	}

	if (stack.empty() && flag==1) printf("YES");
	else printf("NO");
	return 0;
}

