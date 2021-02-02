/*
   problem 2438 : 별 찍기-1
   BAEKJOON >> baekjoon, grace0068, hchanhong
   
   첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
