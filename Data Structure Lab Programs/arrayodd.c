#include <stdio.h>
int main()
{
int a[5],n,i;
printf("Enter The limit: ");
scanf("%d", &n);
printf("Enter the elements; ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The Odd Number in the array is: ");
for(i=0;i<n;i++)
{
if(a[i]%2!=0){
printf(" %d\t", a[i]);
}
}
return 0;
}
