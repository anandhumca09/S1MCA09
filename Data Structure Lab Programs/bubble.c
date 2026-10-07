#include<stdio.h>
void main()
{
int n,i,j,temp,arr[50];
printf("\n Enter the limit: ");
scanf("%d",&n);
printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(arr[j]>arr[j+1])
        {
	temp = arr[j];
	arr[j]=arr[j+1];
	arr[j+1] = temp;
	}
    }
}
printf("\n Sorted Array: \n");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
}
