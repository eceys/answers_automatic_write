#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	int nmbrQues = 0;
	
	printf("How many question : ");
	scanf("%d",&nmbrQues);
	
	printf("\n");
	
	FILE *f;
	f = fopen("answers.txt","w");
	
	int answerArray[nmbrQues];
	
	for(int a = 0 ; a < nmbrQues ; a++){
		
		char answer;
		
		printf("%d. Answers : ",a+1);
		scanf(" %c", &answer);
		
		if(answer >= 65 && answer <= 90){
			answer = answer + 32;
		}
		
		switch(answer){
			case 'a':
				answerArray[a] = 1;
				break;
			case 'b':
				answerArray[a] = 2;
				break;
			case 'c':
				answerArray[a] = 3;
				break;
			case 'd':
				answerArray[a] = 4;
				break;
			case 'e':
				answerArray[a] = 5;
				break;
		}
			
	}
	
	for(int a = 0 ; a < nmbrQues ; a++){
		
		switch(answerArray[a]){
			
			case 1:
				fprintf(f,"%d - ) A\n",a+1);
				break;
			case 2:
				fprintf(f,"%d - ) B\n",a+1);
				break;
			case 3:
				fprintf(f,"%d - ) C\n",a+1);
				break;
			case 4:
				fprintf(f,"%d - ) D\n",a+1);
				break;
			case 5:
				fprintf(f,"%d - ) E\n",a+1);
				break;
			default:
				fprintf(f,"%d - ) Empty\n",a+1);
				break;
		}
		
	}
	fclose(f);
	
	printf("\nQuestions are complete. Press key to continue...");
	getch();
	return 0;
	
}
