#include <stdio.h>
int main()
{
int n ;
printf("enter the value of n \n");
scanf("%d" , &n);
int i , j;
printf(" pattern of right angled triangle is \n ");
for(i=1; i<=n; i++)
{
for( j=0; j<=i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
