/*
   problem 10818 : 최소, 최대
   BAEKJOON >> baekjoon, lina, topology
   
   N개의 정수를 입력받아, 최솟값과 최댓값을 구하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long n, num, min=1000000, max=-1000000;
    scanf("%ld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &num);
        if (max < num)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    printf("%ld %ld\n", min, max);

    return 0;
}
