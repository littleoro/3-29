#define _CRT_SECIRE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

void math(int x) {
	int a = x % 10;
	if (a == 0) {
		return 0;
	}
	x = x / 10;
	math(x);
	printf("%d", a);
}


int main() {
	int a = 0;
	scanf("%d", &a);
	math(a);
	return 0;
}
