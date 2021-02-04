/*
   problem 15596 : 정수 N개의 합
   BAEKJOON >> baekjoon
   
   정수 n개가 주어졌을 때, n개의 합을 구하는 함수
*/

long long sum(int *a, int n)
{
	  long long ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    
	  return ans;
}
