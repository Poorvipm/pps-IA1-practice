#include <stdio.h>
float input()
{
float n;
printf("Enter a number\n");
scanf("%f", &n);
return n;
}
float calculate(float n)
{
float temp, sqt;
sqt=n/2;
temp=0;
while(sqt!=temp)
{
temp=sqt;
sqt=(n/temp+temp)/2;
}
return sqt;

}
void output(float n, float sqt)
{
printf("The square root of %f is %f\n", n, sqt);
}
int main()
{
float a, sqt;
a=input();
sqt=calculate(a);
output(a,sqt);
return 0;
}
