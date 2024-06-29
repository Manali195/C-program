#include<stdio.h>
void main()
{
    int array;
    int size;
    int loc;
    int num;
    int i;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements of the array :\n");
    for (i=0; i<size; i++)
    {
    printf("array %d :\n",i);
    scanf("%d",&array[i]);
    }
    printf("Enter location of element to be inserted :\n");
    scanf("%d",&loc);
    printf("Enter element to be inserted :\n");
    scanf("%d",&num);
    for (i=size-1 ; i>=loc ; i--)
    {
        array[i+1]=array[i];
    }
    array[loc]=num;
    size++;
    printf("Updated Array :\n");
    for(i=0 ; i<size ; i++)
     {
         printf("%d",array[i]);
     }
        printf("\n");
}