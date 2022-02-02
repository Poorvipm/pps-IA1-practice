#include<stdio.h>
int input()
{
  int n;
  printf("enter the number \n");
  scanf("%d",&n);
  return n;

}
int cmp(int a,int b,int c, int large)
{
   if(a>=b&&a>=c)
   {
     large = a;
   }
else if(b>c) 
{
  large = b;
}
else  
{
  large = c;
}
return large;
}
void output(int large)
{
  printf("largest number is %d\n",large);
}
int main()
{
  int a,b,c, large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c,large);
  output(large);
  return 0;
}