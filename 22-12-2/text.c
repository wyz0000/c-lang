#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int arr[20] ;
	int i = 0;
	int j = 0;
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1, n = arr[0], j = 0; i < 10; i++)
	{
		if (max(n, arr[i]) > n)
		{
			n = max(n, arr[i]);
			j = i;
		}
	}
	printf("最大值为%d,这是第%d个数", n, j+1);
	return 0;
}