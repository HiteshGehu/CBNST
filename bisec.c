
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
float x0,x1,x2,f0,f1,f2,e;
printf("Enter the initial nos:\n");
scanf("%f%f",&x1,&x2);
printf("Enter the value of exponent:\n");
scanf("%f",&e);
f0 = f(x0);
f1 = f(x1);
if(f0*f1 > 0.0)
printf("incorrect values");
else 
x2 = (x0+x1)/2;
f2 = f(x2);

