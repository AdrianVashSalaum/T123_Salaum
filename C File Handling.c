#include <stdio.h>
int main() {
	char name[100];
	int i,n,id,a;
	float math,science,english;
	float totalgrade,averageGrade;
	printf("Enter number of students: ");
	scanf("%d",&n);
	for (i=0;i<n;++i){
            int a=snprintf(name,100,"student#%d.txt",i+1);
	FILE *fptr;
	fptr=fopen(name,"w+");
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}

		printf("student number%d\nStudent name: ",i+1);
		scanf("%s",name);
		fprintf(fptr,"\nName:%s\n",name);

		printf("Student ID Number: ");
		scanf("%d",&id);
		fprintf(fptr,"\nID:%d \n",id);

		printf("Math grade:");
		scanf("%f",&math);
		fprintf(fptr,"\nmath grade:%.2f\n",math);

		printf("Science Grade:");
		scanf("%f",&science);
		fprintf(fptr,"\nscience grade:%.2f \n",science);

		printf("English grade:");
		scanf("%f",&english);
		fprintf(fptr,"\nenglish grade:%.2f\n",english);

        totalgrade=math+science+english;
		printf("total grade:%.2f\n",totalgrade);
		fprintf(fptr,"total grade:%.2f\n",totalgrade);

        averageGrade=(math+science+english)/3;
		printf("average grade:%.2f\n",averageGrade);
        fprintf(fptr,"average grade:%.2f\n",averageGrade);

        fclose(fptr);


	}

	return 0;
}
