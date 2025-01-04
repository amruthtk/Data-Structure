#include<stdio.h>
void main()
{
	int arr1[20],arr2[20],arr3[40];
	int n1,n2;
	void readarray(int[],int);
	void printarray(int[],int);
	void sortarray(int[],int);
	void mergearray(int[],int,int[],int,int[]);
	printf("enter number of elements for 1st array: ");
	scanf("%d",&n1);
	printf("enter %d numbers: ",n1);
	readarray(arr1,n1);
	printf("enter number of elements for 2st array: ");
	scanf("%d",&n2);
	printf("enter %d numbers : ",n2);
	readarray(arr2,n2);
	sortarray(arr1,n1);
	sortarray(arr2,n2);
	mergearray(arr1,n1,arr2,n2,arr3);
	printf("\n 1st array sorted: ");
	printarray(arr1,n1);
	printf("\n 2nd array sorted: ");
	printarray(arr2,n2);
	printf("\nmerged array: \n");
	printarray(arr3,n1+n2);
}
void readarray(int a[],int n)
{
	int i;
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	return;
}
	void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;++i)
	printf("%d ",a[i]);
	printf("\n");
	return;
}
	void sortarray(int a[],int n)
	{
	int i,j,temp;
	for(i=0;i<n-1;++i)
	for(j=i+1;j<n;++j)
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	return;
	}
void mergearray(int a[],int n1,int b[],int n2,int c[])
{
	int i,j,k;
	i=j=k=0;
	while(i<n1 && j<n2)
	if(a[i]<b[j])
	c[k++]=a[i++];
	else
	c[k++]=b[j++];
	while(i<n1)
	c[k++]=a[i++];
	while(j<n2)	
	c[k++]=b[j++];
	}
