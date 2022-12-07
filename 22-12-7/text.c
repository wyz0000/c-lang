#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int f()
//{
//	static int	i = 0;
//	int		s = 1;
//	s += i; i++;
//	
//}
//int main()
//{
//	int i, a = 0;
//	for (i = 0; i < 5; i++)
//		a += f();
//	printf("%d", a);
//
//	return 0;
//}



//char f(char x, char y)
//{
//	if (x > y)
//		return(y);
//	else return(x);
//}
//
//
//
//
//int main()
//{
//	char a = '9', b = '8', c = '7', d = '6';
//	printf("%c", f(f(a, b), f(c, d)));
//	return(0);
//}



//long fib(int n)
//{
//	if (n > 2)
//		return(fib(n - 1) + fib(n - 2));
//	else return(2);
//}
//
//
//
//
//int main()
//{
//	printf("%d", fib(3));
//	return(0);
//}



//void fun(int n)
//{
//	int k, r;
//	for (k = 2; k <= sqrt(n); k++)
//	{
//		r = n % k;
//		while (!r)
//		{
//			printf("%d", k);
//			n = n / k;
//			if (n > 1)
//				printf("*");
//			r = n % k;
//		}
//	}
//	if (n != 1)
//		printf("%d\n", n);
//}
//
//
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d=", n);
//	if (n < 0)
//		printf("-");
//	n = abs(n);
//	fun(n);
//	return(0);
//}



int sub(int n)
{
	return(n / 10 + n % 10);
}




int main()
{
	int x, y;
	scanf("%d", &x);
	y = sub(sub(sub(x)));
	printf("%d", y);
	return(0);
}






