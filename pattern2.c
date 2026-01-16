#include<stdio.h>
int main()
{
int n ;
int i , j;
printf("enter the value of n \n");
scanf("%d" , &n);
printf(" pattern is \n");
for(i=1 ; i<=n; i++)
{
for( j=1 ; j<=n-i ; j++)
{
printf(" ");
}
for( k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}
return 0;
}
