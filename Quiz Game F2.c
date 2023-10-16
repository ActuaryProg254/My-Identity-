// ** link to my identity**//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTION 256
#define MAX_ANSWER 128
#define TOTAL_QUESTIONS 5

typedef struct
{
char question[MAX_QUESTION];
char answerA[MAX_ANSWER];
char answerB[MAX_ANSWER];
char answerC[MAX_ANSWER];
char answerD[MAX_ANSWER];
char correct_answer;
}quiz_question;

int main(void)
{
quiz_question quiz[TOTAL_QUESTIONS];

strcpy(quiz[0].question, 
"What is my name?");
strcpy(quiz[0].answerA, 
"Florence");
strcpy(quiz[0].answerB, 
"Shadrack");
strcpy(quiz[0].answerC, 
"Collins");
strcpy(quiz[0].answerD, 
"Manasseh");
quiz[0].correct_answer= 'B';

strcpy(quiz[1].question, 
"where do I come from?");
strcpy(quiz[1].answerA, 
"Kisumu");
strcpy(quiz[1].answerB, 
"Migori");
strcpy(quiz[1].answerC, 
"Homabay");
strcpy(quiz[1].answerD, 
"Siaya");
quiz[1].correct_answer= 'A';

strcpy(quiz[2].question, 
"How old am i ?");
strcpy(quiz[2].answerA, "25");
strcpy(quiz[2].answerB, "32");
strcpy(quiz[2].answerC, "23");
strcpy(quiz[2].answerD, "27");
quiz[2].correct_answer= 'C';

strcpy(quiz[3].question, 
"What is my profession?");
strcpy(quiz[3].answerA, 
"A Civil Engineer");
strcpy(quiz[3].answerB, 
"An Accountant");
strcpy(quiz[3].answerC, 
"A Doctor");
strcpy(quiz[3].answerD,
"A Software Developer");
quiz[3].correct_answer= 'D';

strcpy(quiz[4].question, 
"Where am i currently?");
strcpy(quiz[4].answerA, "kabianga");
strcpy(quiz[4].answerB, "Nairobi");
strcpy(quiz[4].answerC, "Nakuru");
strcpy(quiz[4].answerD, "Kisumu");
quiz[4].correct_answer= 'D';

double total_correct = 0;
char answer;

for (int i = 0; i < TOTAL_QUESTIONS; i++)
{
 printf("Question %d: %s\n\n", 
 (i+1), quiz[i].question);
 printf("A) %s\n", quiz[i].answerA);
 printf("B) %s\n", quiz[i].answerB);
 printf("C) %s\n", quiz[i].answerC);
 printf("D) %s\n", quiz[i].answerD);
 printf("\nEnter Answer(A,B,C or D):");
 
 scanf(" %c", &answer);
 
 if (toupper
 (answer) == quiz[i].correct_answer)
 
 {
 total_correct++;
 printf("\n\nCorrect Answer");
 }

else
{
printf("\n\nIncorrect Answer!");
printf("\n\nThe correct answer %c.", 
quiz[i].correct_answer);
}

printf("\n\n\n");
}

printf("%d/%d questions answered correctly",
  (int) total_correct, TOTAL_QUESTIONS);

printf(" (%.2%%)\n\n", 
(total_correct/TOTAL_QUESTIONS) *100);

return 0 ;
}