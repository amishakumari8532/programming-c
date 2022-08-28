#include<stdio.h>
struct student {
	char firstname[50];
	int roll;
	float marks;	
} 
s[10];
int main() {
	int i;
	printf("Enter information of students:/x");
	for(i=0;i<10;i++){
		s[i].roll=i+1;
		printf("\n for roll number %d\n",s[i].roll);
		printf("Enter first name");
		scanf("%s",s[i].firstname);
		printf("Enter marks");
		scanf("%f",& s[i].marks);
	}
	return 0;
}
