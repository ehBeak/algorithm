#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int top = -1;
int stack[100];

void push(int e) {
	stack[++top] = e;
}

int pop() {
	return stack[top--];
}

int main() {
	
	int n, k;
	scanf("%d %d", &n, &k);
	char str[20] = "0123456789ABCDEF";

	while (n != 0) {
		push(n % k);
		n /= k;
	}

	while (top != -1) {
		printf("%c", str[pop()]);
	}

	return 0;
}

