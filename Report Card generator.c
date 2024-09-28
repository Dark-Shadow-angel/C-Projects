//Program to generate report card of student.

#include<stdio.h>
#include<unistd.h>

int main(){
	
	char name[30];
	int std;
	char sect;
	int mathsMarks;
	int EnglishMarks;
	int HindiMarks;
	int ScienceMarks;
	int SocialMarks;
	
	puts("---------------------------------------");
	puts("      Jawahar Navodaya Vidyalaya");
	puts("         Annual Report Card\n\n");
	
	printf("Name:");
	scanf("%[^\n]%*c",name);

	printf("Standard:");
	scanf("%d",&std);
	
	printf("Section:");
	scanf("%c\n",&sect);
	
	puts("\nMarks Secured out of 100");
	while ((getchar()) != '\n'); 
	printf("Mathematics:");
	scanf("%d",&mathsMarks);
	
	 while ((getchar()) != '\n');
	printf("English:");
	scanf("%d",&EnglishMarks);
	
	while ((getchar()) != '\n'); 
	printf("Hindi:");
	scanf("%d",&HindiMarks);
	
	while ((getchar()) != '\n'); 
	printf("Science:");
	scanf("%d",&ScienceMarks);
	
	while ((getchar()) != '\n'); 
	printf("Social science:");
	scanf("%d",&SocialMarks);
	
	
	puts("\n");
	
	int totalMarks=mathsMarks+EnglishMarks+HindiMarks+ScienceMarks+SocialMarks;
	printf("Total Marks Secured:%d\n",totalMarks);
	
	puts("Calculating Grade...\n");
	usleep(30000000);
	
	
	if(totalMarks>=450 &&totalMarks<=500){
		printf("Grade A");
	}else if(totalMarks>=400&&totalMarks<=499){
		printf("Grade B");
	}else if(totalMarks>=350&&totalMarks<=399){
		printf("Grade C");
	}else if(totalMarks>=300&&totalMarks<=349){
		printf("Grade D");
	}else if(totalMarks>=200&&totalMarks<=299){
		printf("Grade E");
	}else if(totalMarks>=0&&totalMarks<200){
		printf("Grade F");
	}else{
		printf("Marks out of range");
	}
	printf("\n");
	
	puts("-------------------------------------");
	return 0;
}
