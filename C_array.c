#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element[10],size,i,sum=0;
    printf("enter size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++){

    printf("enter element:");
    scanf("%d",&element[i]);
    }

    printf("sum of array elements:");
    for(i=0;i<size;i++){


        sum=sum+element[i];
    }

    printf("%d",sum);
    return 0;
}
