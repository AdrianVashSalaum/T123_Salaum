#include <stdio.h>
#include <stdlib.h>
void add (int a,int b,int c,int d,int e){
int sum;
sum=a+b+c+d+e;

average(sum);
}
void average(int sum){
int calculate;
calculate=sum/5;

printf("average:%d",calculate);
}


int main()
{
    int a,b,c,d,e;
    printf("enter five numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    add(a,b,c,d,e);
    return 0;
}
