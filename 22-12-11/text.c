#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//��ַ����,����������
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




//��ַ���ã����Ӵ�С���
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
	swap(&a, &b);   //��Ҫ��a,b�޸ģ�ͨ����ַ��ϰ
	printf("%d %d\n", a, b);
	return 0;
}