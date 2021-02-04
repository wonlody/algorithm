/*
   problem 1546 : 평균
   BAEKJOON >> baekjoon, ho94949, jh05013, powdragon1
   
   입력받은 최댓값으로 평균을 조작하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n, max = 0;
    double tot = 0;
    
    scanf("%d", &n);
    double score[n];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &score[i]);
        if (max < score[i])
        {
            max = score[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        score[i] = score[i] / max * 100;
        tot += score[i];
    }
    printf("%lf\n", tot/n);

    return 0;
}
