#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

float average(float arr[10])
{
	float sum = 0;
	float a = 0;
	int i = 0;
	sum = arr[0];
	for (i = 1; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	a = sum / 10.0;
	return a;
}

int main()
{
	float score[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	float tmp = average(score);
	printf("%f\n", tmp);

	return 0;
}



