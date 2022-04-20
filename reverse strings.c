#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str [100];
    printf("enter any strings:");
    gets(str);
    strrev(str);
    printf("Reverse ordered words:%s\n",str);
    return 0;
}
