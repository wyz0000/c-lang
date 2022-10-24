#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
    //	int i =0;
    //	for (i = 0; i < 10; i++)
    //	{
    //		if (i = 5)                      //改为if(i==5),可以输出5   
    //			printf("%d ", i);
    //	}                             
    //	return 0;
    //}                               //5555555555555555555555555.....


    
//    int x = 3;
//    int y = 3;
//    switch (x % 2) {
//    case 1:
//        switch (y)
//        {
//        case 0:
//            printf("first");
//        case 1:
//            printf("second");                      
//            break;       
//        default: printf("hello");  
//        }  //没有break所以继续往下打印  
//    case 2:
//        printf("third");
//    }
//    return 0;
//}


//int main()
//{
//    int i;
//    for (i = 1; i < 101; i++)
//    {
//        if (i % 3 == 0 && i< 101)
//            printf("%d\t", i);
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//			printf("%d %d %d\n",a,b,c );
//		else
//			printf("%d %d %d\n",a,c,b );
//	}
//	else if (a < b)
//	{
//		if (a < c)
//			printf("%d %d %d\n",b,c,a );                  //输入三个数，从大到小输出
//		else
//			printf("%d %d %d\n",b,a,c);
//	}
//	else if (c > a)
//	{
//		if (a > b)
//			printf("%d %d %d\n",c,a,b);
//		else
//			printf("%d %d %d\n",c,b,a );
//	}
//	return 0;
//}


int main()
{
    int i,j;
    for(i=100;i<=200;i++)
    {
          for (j = 2; j < i; j++)
          {                    
              if (i % j == 0)       // 判断i模j是否没有余数，余数=0则表示i能被比自己小的数整除，不是素数
              break;
          }
            
     if (j == i)                   //打印100-200间的素数
     printf("%d ", i);
            
    }
    return 0;
}



