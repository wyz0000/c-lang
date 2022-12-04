#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
    assert(left && right);
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main() {
    char arr[100] = { 0 };
    gets(arr);
    int len = strlen(arr);
    //完成这个逆序
    //1. 逆序整个字符串
    reverse(arr, arr + len - 1);
    //逆序每个单词
    char* cur = arr;
    while (*cur)
    {
        char* start = cur;
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        if (*cur != '\0')
            cur++;
    }

    //打印
    printf("%s\n", arr);

    return 0;
}



//1.逆序整个字符串
//2.逆序每个单词