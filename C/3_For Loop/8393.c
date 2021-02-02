/*
   problem 8393 : 합
   BAEKJOON >> Contest > Algorithmic Engagements > PA 2006 0-1번
   baekjoon
   
   n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        sum = sum + i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
