#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
float H,M,W,BMI; 
 printf("BMI計算器\n"); 
 printf("你的身高：");
 scanf("%f",&H);
 printf("你的體重：");
 scanf("%f",&W);
 M=H/100; 
 BMI=W/(M*M); 
 printf("BMI = %.2f\n",BMI);
 system("pause"); 
 return 0;
}
