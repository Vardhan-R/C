#include<stdio.h>
void main()
{
int a=40, b=50, c=30;
int max= (a>b? (a>c?a:c) : (b>c? b:c));
printf("Max: %d",max);
int min= (a<b? (a<c?a:c) : (b<c? b:c));
printf("Min: %d",min);
}