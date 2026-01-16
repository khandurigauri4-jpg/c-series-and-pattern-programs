
// calculating sum of series : 1^1 + 2^2 + 3^3 ...n^n 

#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("enter the value of n \n");
scanf("%d" , &n);
int i ;
int sum = 0;
for( i=1; i<=n ; i++)
{
sum = sum + pow(i,i);
}
printf("sum of series is = %d" , sum);
return 0;
}


