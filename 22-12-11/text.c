#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//传址调用,交换两个数
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;          //tmp=a
//	*pa = *pb;              //a=b;
//	*pb = tmp;              //b=tmp
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}




//传址调用，按从大到小输出
void swap(int* pa, int* pb)
{
	int tmp = 0;
	if (*pa < *pb)
	{
		tmp = *pa;
		*pa = *pb;
		*pb = tmp;
	}
	else
	{
		;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);   
	swap(&a, &b);   //需要对a,b修改，通过地址练习
	printf("%d %d\n", a, b);
	return 0;
}