#include<stdio.h>
int input()
{
  int n; 
  printf("Enter a number");
  scanf("%d", &n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum = sum+i;
  }
  return sum;
}
void output( int n, int sum)
{ 
  for(int i=1; i<n;i++)
  {
    printf("%d+",i);
  }
    printf("%d is %d\n",n,sum);
}
int main()
{ 
  int n = input();
  int sum = sum_n(n);
  output(n,sum);
  return 0;
}