#include<stdio.h>
int main()
{
    int size_of_array,h=0;
    scanf("%d",&size_of_array);
    long int array[size_of_array];
    for(int i=0;i<size_of_array;i++)
    {
        scanf("%d",&array[i]);
        h=h+array[i];
    }
    printf("%d",h);
    return 0;
 }
