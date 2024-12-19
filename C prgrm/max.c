#include <stdio.h>
void main()

{
int no1,no2,no3,max;
printf("Enter three mumbers");
scanf("%d%d%d",&no1,&no2,&no3);
if 
    (no1>no2)
    max=no1;
else
    max=no2;
if (no3>max)
    max=no3;

printf ("Maximum is %d",max);
}
