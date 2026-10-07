#include <stdio.h>
int main()
{
int a[5],n,i,key,found = 0;
printf("Enter The limit: ");
scanf("%d", &n);
printf("Enter the elements; ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be searched: \n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Element found at position %d\t",i+1);
found = 1;
}
}
if(found ==0){
printf("Element not found");
}
return 0;
}
