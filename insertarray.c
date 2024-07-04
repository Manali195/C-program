#include<stdio.h>
void main()
{
    int a[5],loc,num,i;
    printf("Enter the elements of the array :\n");
    for (i=0;i<4;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter location of element to be inserted :\n");
    scanf("%d",&loc);
    printf("Enter element to be inserted :\n");
    scanf("%d",&num);
    for (i=4-1;i>=loc; i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=num;
    printf("Updated Array :\n");
    for(i=0;i<4;i++)
     {
         printf("%d",a[i]);
     }
       
}