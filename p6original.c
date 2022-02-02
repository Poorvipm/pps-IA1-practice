#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 void input(char *str1,char *str2)
 {
   printf("enter the first string:\n");
   scanf("%s",str1);
   printf("enter the second string:\n");
   scanf("%s",str2);

 }
 int compute(char str1[20], char str2[20])
 {
   int value;
   value=strcmp(str1,str2);
   return value;
 }
 void output(char str1[20], char str2[20], int value)
 {
   if (value==0)
   { 
     printf("strings are same\n");
   }
   else if(value>0)
   {
     printf("%s is greater than %s\n",str1,str2);

   }
 else 
 {
   printf("%s is greater than %s\n",str2,str1);

 }
 }
 int main()
 {
   char str1[20],str2[20];
   int value;
   input(str1,str2); 
   value=compute(str1,str2);
   output(str1,str2,value);
   return 0;
 }

 
