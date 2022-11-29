#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (* str++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[100];
	gets(arr);
	printf("%d\n", my_strlen(arr));

	return 0;
}