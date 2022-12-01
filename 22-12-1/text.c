#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int Fun(int a)
{
	if (a == 1)
		return 1;
	else
		return a * Fun(a - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fun(n));
	return 0;
}





