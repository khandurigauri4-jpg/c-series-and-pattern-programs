// calculating sum of series : 1-2+3-4+5...n

#include <stdio.h>
int main()
{
int n ;
printf("enter the value of n \n");
scanf("%d" , &n);
int sum =0;
int i ;
 for( i=1 ; i<=n ; i++)
{
if( i%2 == 0 )
sum = sum - i;
if( i%2 != 0)
sum = sum + i;
}
printf("sum of the following series is = %d" , sum);
return 0;
}

