#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	for (int i = 0; i != 5; i++)
//	{
//		for (int j = 0; j < i; j++)
//			printf("  ");
//		printf("* * * * *\n");
//	}
//
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i != 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("  ");
		}
		printf("* * * * *\n");
	}


	return 0;
}