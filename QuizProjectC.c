// RIYA GUPTA B.tech. CSE Ist Sem Section - C Student...

// My First C Language Project...

// This program is a Quiz Game in C Language.

// Rigorous Usage of "Nesting" mainly.


#include<stdio.h>// Preprocessor and Library --> Header file...// for printf and scanf functions
#include<time.h>// For adding time related things

int main()
{
// constants -> Primary & secondary // Variable declaration section
// Input
// logic
// Output	

int i;// for conditions for Nesting
int s=0;// loop // initialisation
char ans1,ans2,ans3,ans4,ans5;
int point1,point2,point3,point4,point5;
int total;
time_t start,end; // time_t --> data type for setting time related variables
double time_taken;// double is a data type which is more precise than float data type and hence store values upto larger decimal places.

printf("Hello Everyone!");
printf("\n\nI'm RIYA GUPTA your host for the Quiz from B.tech. CSE Ist Sem.");
printf("\n\nWelcome to this Challenging Quiz Game :)");
printf("\n\n");
for( ;s<4;)
{
printf("> Press : 6 to start this game and test your knowledge.");
printf("\n> Press : 0 to quit the game.\n");

printf("Your choice = ");
scanf("%d",&i);

if(i==6) // Multiple Alternate ---> Ladder
{
	printf("\nThe game has started...YAY!!!");
}

else if(i==0)
{
	printf("\nThe game has been ended...HOPE YOU ENJOYED!!!");
}

else
{
	printf("Invalid Choice...TRY AGAIN!!!");	
}
	
	
	
if(i==6)
{
	printf("\n\n=> The Rules for the Quiz :-");
	printf("\ni) The time limit for answering each question is 40 seconds.");
	printf("\nii) Each correct answer will make you earn 5 points.");
	printf("\niii) You can replay the game to boost your previous score.");
	
	printf("\n\n_____Ready to dive in ... So , Let's Begin !_____");
	
	printf("\n\nQues-1) What is Git ?\n");
	printf("\na) A distributed version control.");
	printf("\nb) A centralised verison control.");
	printf("\nc) A text editor.");
	printf("\nd) A compiler.");
	
	printf("\nYour Answer is :");
	time(&start); // to start the timer
	scanf(" %c",&ans1);// Added space before %c to handle the whitespace character
	time(&end);// to stop or end the timer
	
	time_taken = difftime(end,start); // difftime ---> a function to get the difference b/w two time values
	
	printf("\n\nYou took %.2f seconds",time_taken);
	
 if(time_taken > 40)
 {
	printf("\nTime's up ! No points awarded...");
	point1=0;
	
 }
	
 else 
 {
	
     if(ans1=='a')
	{ 
	 printf("\nYAY! Correct Answer");
	 point1=5;
	 printf("\nYou have scored %d points.",point1);
	}
	
	else
	{
		printf("\nOhh! Wrong Answer");
		point1=0;
		printf("\nYou have scored %d point.",point1);		
	}
	
	
 }
 
	printf("\n\nQues-2) What does \"GPT\" in ChatGPT stands for ?\n");
	printf("\na) General Purpose Translator");
	printf("\nb) Generative Post - Trained Transformer");
	printf("\nc) Generative Pre - Trained Tranponder");
	printf("\nd) Generative Pre - Trained Transformer");
	
	printf("\nYour Answer is :");
	time(&start);
	scanf(" %c",&ans2);
	time(&end);
	
	time_taken = difftime(end,start); // difftime ---> a function to get the difference b/w two time values
	
	printf("\n\nYou took %.2f seconds",time_taken);
	
 if(time_taken > 40)
 {
  printf("\nTime's up ! No points awarded...");
  point2=0;

 }
	
 else 
 {
	
	if(ans2=='d')
	{ 
	    printf("\nYAY! Correct Answer");
	    point2=5;
	    printf("\nYou have scored %d points.",point2);
	}
	
	else
	{
		printf("\nOhh! Wrong Answer");
		point2=0;
		printf("\nYou have scored %d point.",point2);
	}
	
 }
 
	printf("\n\nQues-3) In Git, which command is used to create a new branch ?\n");
	printf("\na) git checkout [branch-name]");
	printf("\nb) git new [branch-name]");
	printf("\nc) git init [branch-name]");
	printf("\nd) git branch [branch-name]");
	
	printf("\nYour Answer is :");
	time(&start);
	scanf(" %c",&ans3);
	time(&end);
	time_taken = difftime(end,start); // difftime ---> a function to get the difference b/w two time values
	
	printf("\n\nYou took %.2f seconds",time_taken);
	
 if(time_taken > 40)
 {
  printf("\nTime's up ! No points awarded...");
  point3=0;
	
 }
	
 else 
 {	
	
	if(ans3=='d')
	{
		printf("\nYAY! Correct Answer");
		point3=5;
		printf("\nYou have scored %d points.",point3);
	}
	
	else
	{
		printf("\nOhh! Wrong Answer");
		point3=0;
		printf("\nYou have scored %d point.",point3);
	}

 }
 
	printf("\n\nQues-4) Which tag do we use in HTML for inserting a line-break ?\n");
	printf("\na) <a>");
	printf("\nb) <break>");
	printf("\nc) <b>");
	printf("\nd) <br>");
	
	printf("\nYour Answer is :");
    time(&start);
	scanf(" %c",&ans4);
	time(&end);
	
	time_taken = difftime(end,start);
	
	printf("\n\nYou took %.2f seconds",time_taken);
	
 if(time_taken > 40)
 {
  printf("\nTime's up ! No points awarded...");
  point4=0;
	
 }
	
 else 
 {	
	
	if(ans4=='d')
	{
		printf("\nYAY! Correct Answer");
		point4=5;
		printf("\nYou have scored %d points.",point4);
	}
	
	
		else
	{
		printf("\nOhh! Wrong Answer");
		point4=0;
		printf("\nYou have scored %d point.",point4);
	}

 }
	
	printf("\n\nQues-5) What is the purpose of \"wireframing\" in web design ?\n");
	printf("\na) To create fully functional web pages.");
	printf("\nb) To design engaging animations and transitions.");
	printf("\nc) To outline the layout and structure of web pages.");
	printf("\nd) To optimize website performance.");
	
	printf("\nYour Answer is :");
	time(&start);
	scanf(" %c",&ans5);
	time(&end);
	
	time_taken = difftime(end,start);
	
	printf("\n\nYou took %.2f seconds",time_taken);
	
 if(time_taken > 40)
 {
  printf("\nTime's up ! No points awarded...");
  point5=0;
	
 }
	
 else 
 {	
	
	if(ans5=='c')
	{
		printf("\nYAY! Correct Answer");
		point5=5;
		printf("\nYou have scored %d points.",point5);
	}
	
	else
	{
		printf("\nOhh! Wrong Answer");
		point5=0;
		printf("\nYou have scored %d point.",point5);
	}
	
 }

	total = point1 + point2 + point3 + point4 + point5;
	printf("\n\nYour Total score = %d points.",total);
}
	printf("\nWanna play one more time ?");
	printf("\nPress : 1 for No and Press : 2 for Yes");
	
	printf("\nYour Choice = ");
	scanf("%d",&s);
	if(s==1)
	{
	printf("\n\nHope you Enjoyed the Quiz :)");
	break;
    }
	
	else if(s==2)
	{
	s++; // incrementation
    }
    
    else
    {  
	printf("\nInvalid Choice...TRY AGAIN!!!\n");	
    }

	

}	
	
	return 0; // Normal termination of the program
}


// THANK YOU FOR YOUR PATIENCE...



// Am thinking to add --> a) leaderboard b) difficulty level of questions ---> in My Program.



