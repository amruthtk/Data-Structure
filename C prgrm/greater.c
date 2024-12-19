#include <stdio.h>
void main()
{
float avg;
int no1,no2,sum;
printf ("Enter 2 numbers");
scanf ("%d%d",&no1,&no2);
sum=no1+no2;
avg=(float)sum/2;
printf("sum=%d\n",sum);
printf("avg=%.2f\n",avg);
}

