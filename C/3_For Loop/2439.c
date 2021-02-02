/*
   problem 2438 : 별 찍기-2
   BAEKJOON >> baekjoon, namnamseo
   
   첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 프로그램 (오른쪽 기준으로 정렬)
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
