#include <stdio.h>
int main()
{
int a[5],n,i,sum = 0;
printf("Enter The limit: ");
scanf("%d", &n);
printf("Enter the elements; ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The elements are: ");
for(i=0;i<n;i++)
{
printf("%d\t", a[i]);
}
for(i=0;i<n;i++)
{
sum = sum+a[i];
}
printf("\n The Added elements are : %d\t", sum);
return 0;
}
