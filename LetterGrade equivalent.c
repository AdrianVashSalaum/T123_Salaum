#include <stdio.h>
#include <stdlib.h>


int main()
{
 int grade;
 printf("enter grade:");
 scanf("%d",&grade);
 if(grade >100 || grade <=0){
    printf("Invalid grade...Try Again.");
 }
 else if (grade >= 50&& grade <= 59){
    printf("your letter grade is D");
 }

else if (grade >= 60&& grade <= 67){
    printf("your letter grade is C");
 }
 else if (grade >= 68&& grade <=75){
    printf("your letter grade is B-");
 }
 else if (grade >= 76&& grade <=83){
    printf("your letter grade is B");
 }
 else if (grade >= 84&& grade <=91){
    printf("your letter grade is A-");
 }
 else if (grade >=92&&grade<=100){
    printf("your letter grade is A");
 }

else
{
    printf("your letter grade is F");
 }

    return 0;
}


