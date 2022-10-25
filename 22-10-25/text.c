#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k =0; i++, k++)        //零次循环 k=0是赋值
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
//            if (i % j == 0)               // 判断i模j是否没有余数，余数=0则表示i能被比自己小的数整除，不是素数
//                break;
//        }
//
//        if (j == i)                      //打印100-200间的素数
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
//		printf("%d",t);          输入整数，倒序输出，计算位数
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
//			printf("%d ", i);                 //100-200间不能被3整除的数
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
	int count = 0;           //保存位数
	scanf("%d", &n);
	if (n == 0)
		printf("是一位数");
	while (n != 0)
	{
		n /= 10;  // 同理求8进制数位数 则为n/=8   八进制则为n/=8 
		count++;
	}
	printf("%d", count);
	return 0;
}                       //求输入整数的位数
