
#include<stdio.h>
struct complex
{
   float real, imaginary;
};
typedef struct complex Complex;

 
 Complex input_complex()
 {
   Complex a;
   printf("Enter the complex number\n");
   scanf("%f%f",&a.real,&a.imaginary);
   return  a;
 }
 
 Complex add(Complex a, Complex b)
 {
   struct complex c;
   c.real = a.real + b.real;
   c.imaginary=a.imaginary + b.imaginary;
   return c;
 }
 
 void output(Complex a,Complex b,Complex c)
 {
 printf("sum of complex number is %f + i%f\n",c.real,c.imaginary);
 }
int main()
{
  Complex a,b,c;
  a=input_complex();
  b=input_complex();
  c = add(a,b);
  output(a,b,c);
  return 0;
}
