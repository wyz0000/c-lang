#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k =0; i++, k++)        //���ѭ�� k=0�Ǹ�ֵ
//        k++;
//      return 0;
//}


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 1; i < a; i++)
//	{
//		for (j = 1; j < i; j++)            //* ** ***
//		{
//			printf("*");
//		}
//	printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)               // �ж�iģj�Ƿ�û������������=0���ʾi�ܱ����Լ�С������������������
//                break;
//        }
//
//        if (j == i)                      //��ӡ100-200�������
//            printf("%d ", i);
//
//    }
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int i = 0;
//	int t = 0;
//	scanf("%d", &i);
//	while (i != 0)
//	{
//		t = i % 10;
//		printf("%d",t);          �����������������������λ��
//		i /= 10;
//		a++;
//	}
//	printf("\n%d", a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 != 0)
//			printf("%d ", i);                 //100-200�䲻�ܱ�3��������
//	}
//	return 0;
//}
//
//int main()
//{
//	int sign = 1;
//	double a = 2.0;
//	double sum = 1.0;
//	while (a <= 100)
//	{
//		sign = -sign;
//		sum = sum + sign / a;             //1-1/2+1/3-1/4....+1/99-1/100
//		a += 1;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//    int t = 0;
//    int i = 0;
//    for (i = 1; i <= 5; i++)
//    {
//        t = i + t * 10;
//        printf("%d\n", t);
//    }                                   //1 12 123 1234 12345
//    return 0;
//}
//


//int main()
//{
//	int a [5][5],i,j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d\t", i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int n=0;  
	int count = 0;           //����λ��
	scanf("%d", &n);
	if (n == 0)
		printf("��һλ��");
	while (n != 0)
	{
		n /= 10;  // ͬ����8������λ�� ��Ϊn/=8   �˽�����Ϊn/=8 
		count++;
	}
	printf("%d", count);
	return 0;
}                       //������������λ��
