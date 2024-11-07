#include<stdio.h>
void main(){
    float a;
    printf("Enter a floating point value\n",a);
    scanf("%f",&a);
    int i=(int)a;
    printf("The original floating point value is:%.2f\n",a);
    printf("The converted integer value is:%d",i);
}