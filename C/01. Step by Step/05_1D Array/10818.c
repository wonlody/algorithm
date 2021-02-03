/*
   problem 10818 : 최소, 최대
   BAEKJOON >> baekjoon, doju, eric00513, jh05013
   
   N개의 정수를 입력받아, 최솟값과 최댓값을 구하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    long n, new_n, cycle = 0;
    scanf("%ld", &n);
    
    new_n = n;

    while (1)
    {
    	if (new_n < 10)
    	{
    		new_n = 11 * new_n;
    	}
    	else
        {
            new_n = (new_n % 10) * 10 + (new_n / 10 + new_n % 10) % 10;
        }

        cycle++;
        
        if (new_n == n)
        {
            printf("%d\n", cycle);
            break;
        }
    }
    
    return 0;
}
