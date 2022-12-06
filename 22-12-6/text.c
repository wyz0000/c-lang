#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1, b = 2, c = 4, d = 3;
//	int x = 0;
//	if (a < b)
//		if (c < d)
//			x = 1;
//		else
//			if (a < c)
//				if (b < d)
//					x = 2;
//				else
//					x = 3;
//			else
//				x = 4;
//	else
//		x = 5;
//	printf("%d\n", x);
//	return 0;
//}


//int main()
//{
//	int a = 1, b = 0, x, y, z;
//	x = (--a == b++) ? -a : ++b;
//	y = a++;
//	z = b;
//	printf("%d\n%d\n%d\n", x, y, z);
//	return 0;
//}


 int main()
{
	int a = 5, b = 4, c = 6, d;
	printf("%d\n", d = a > b ? a > c ? a : c : b);    //先计算中间的三目

	return 0;
}



