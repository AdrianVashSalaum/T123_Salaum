#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;

	printf(" Input the file Location: ");
	scanf("%s",fname);
    fptr = fopen(fname, "a");
    printf("input how manny lines to be appended: ");
    scanf("%d",&n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
	fptr = fopen (fname, "w");
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    fclose (fptr);
return 0;
}




