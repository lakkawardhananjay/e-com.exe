#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t          QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t    WELCOME TO THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
	 choice;
	 scanf("%c",&choice);
	 fflush(stdin);
	 choice=toupper(choice);
     if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto game;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     {system("cls");}
    /* count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;*/

/*switch(r1)
		{

			case 1:
			printf("\n\n how are string represented in memory in c?");
			printf("\n\nA.an array of chracter\t\tB.the object of sum class\n\nC.Same as other primitive data types\t\tD.linked list of chracters");
			printf("\nEnter your answer:");
			char ans1;
			scanf("%c",&ans1);
			if(toupper(ans1)=='A'||toupper(ans1)=='B'||toupper(ans1)=='C'||toupper(ans1)=='D'){
			if (toupper(ans1)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans1)=='B'||toupper(ans1)=='C'||toupper(ans1)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is A.an array of character");getch();goto score;
				break;

				}
			}


		/*	if (toupper(ans1)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans1)=='B'||toupper(ans1)=='C'||toupper(ans1)=='D' )
				{
					printf("\n\n Wrong!!! The correct answer is A.an array of character");getch();
					goto score;
				break;

				}*/
				/*else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}

				}				else {
					printf("\n \n Enter valid option!!!!!!:");
				}

				break;

			case 2:
					printf("\n\n\nIdentify the correct syntax for declaring array in c++?");
					printf("\n\nA.array arr[10]\t\tB.array{10}\n\nC.int arr[10]\t\tD.int arr");
					printf("\nEnter your answer:");
					char ans2;
					scanf("%c",&ans2);
						if (toupper(ans2)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans2)=='A'||toupper(ans2)=='B'||toupper(ans2)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.int arr[10]");getch();goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans2)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans2)=='A'||toupper(ans2)=='B'||toupper(ans2)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.int arr[10]");getch();
					goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}

                }

				break;

				case 3:
					printf("\n\n\nIdentify the correct example of pre-increment operator?");
		            printf("\n\nA.++n\t\tB.n++\n\nC.--n\t\tD.+n");
                    printf("\nEnter your answer:");
					char ans3;
					scanf("%c",&ans3);

						if (toupper(ans3)=='B')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			  else if(toupper(ans3)=='A'||toupper(ans3)=='C'||toupper(ans3)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is B.++n");getch();goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans3)=='B')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans3)=='A'||toupper(ans3)=='C'||toupper(ans3)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is B.++n");getch();
					goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

				case 4:
					 printf("\n\n\nyou can use c++ as a procedural as well asa an object oriented language?");
                     printf("\n\nA.True\t\tB.False");
                     printf("\nEnter your answer:");
					char ans4;
					scanf("%c",&ans4);

						if (toupper(ans4)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans4)=='B'||toupper(ans4)=='C'||toupper(ans4)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is A.True");getch();goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans4)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans4)=='B'||toupper(ans4)=='C'||toupper(ans4)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is A.True");getch();
					goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;


				case 5:
					 printf("\n\n\nwhich of the following type of class allows only one object of it to be created?");
					 printf("\n\nA.Virtual class\t\tB.Abstract class\n\nC.Singleton class\t\tD.Friend class");
					printf("\nEnter your answer:");
					char ans5;
					scanf("%c",&ans5);
						if (toupper(ans5)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans5)=='A'||toupper(ans5)=='B'||toupper(ans5)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.Singleton class");getch();goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans5)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans5)=='A'||toupper(ans5)=='B'||toupper(ans5)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.Singleton class");getch();
					goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;
		}
        }


	/*if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}*/
    /* test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')"*/
		goto game;
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

      switch(r)
		{

			case 1:
					    printf("\n\nWho invented c++?");
		                printf("\n\nA.Dennis ritchie\t\tB.Ken Thompson\n\nC.Brian Kernighan\t\tD.Bjarne Stroustrup");
                        printf("\nEnter your answer:");
					    char ans6;
					    scanf("%c",&ans6);

				if (toupper(ans6)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					//getch();
					break;
				}
			else if(toupper(ans6)=='A'||toupper(ans6)=='B'||toupper(ans6)=='C' )
				{
					printf("\n\nWrong!!! The correct answer is D.Bjarne Stroustrup");//getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");

			if (toupper(ans6)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans6)=='A'||toupper(ans6)=='B'||toupper(ans6)=='C')
				{
					printf("\n\nWrong!!! The correct answer is C.D.Bjarne Stroustrup");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

				case 2:
					    printf("\n\n\nwhich of the following user-defined header file extension used in c++?");
		                printf("\n\nA.hg\t\tB.cpp\n\nC.h\t\tD.hf");
                        printf("\nEnter your answer:");
					    char ans7;
					    scanf("%c",&ans7);

						if (toupper(ans7)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans7)=='A'||toupper(ans7)=='B'||toupper(ans7)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.h");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans7)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans7)=='A'||toupper(ans7)=='B'||toupper(ans7)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.h");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;


				case 3:
					    printf("\n\n\nWhich of the following is not a type of constructor in c++ ?");
		                printf("\n\nA.Default constructor\t\tB.Parameterized constructor\n\nC.Copy constructor\t\tD.Friend constructor");
                        printf("\nEnter your answer:");
					    char ans8;
					    scanf("%c",&ans8);
						if (toupper(ans8)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans8)=='A'||toupper(ans8)=='B'||toupper(ans8)=='C' )
				{
					printf("\n\nWrong!!! The correct answer is D.Friend constructor");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans8)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans8)=='A'||toupper(ans8)=='B'||toupper(ans8)=='C' )
				{
					printf("\n\nWrong!!! The correct answer is D.Friend constructor");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

				case 4:
					    printf("\n\n\nWhich of the approach is used by c++?");
						printf("\n\nA.Left-Right\t\tB.Right-Left\n\nC.Bottom-up\t\tD.Top-Down");
                        printf("\nEnter your answer:");
					    char ans9;
					    scanf("%c",&ans9);
						if (toupper(ans9)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans9)=='A'||toupper(ans9)=='B'||toupper(ans9)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans9)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans9)=='A'||toupper(ans9)=='B'||toupper(ans9)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

				case 5:
					     printf("\n\n\nWhich of the following data type is provided by c++ but not c?");
						printf("\n\nA.double\t\tB.float\n\nC.int\t\tD.bool");
                        printf("\nEnter your answer:");
					    char ans10;
					    scanf("%c",&ans10);
						if (toupper(ans10)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans10)=='A'||toupper(ans10)=='B'||toupper(ans10)=='C' )
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans10)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans10)=='A'||toupper(ans10)=='B'||toupper(ans10)=='C')
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

                case 6:
					    printf("\n\n\nBy default ,all the files in c++ are opened in which mode?");
		                printf("\n\nA.Binary\t\tB.VTC\n\nC.Text\t\tD.ISCII");
                        printf("\nEnter your answer:");
					    char ans11;
					    scanf("%c",&ans11);
						if (toupper(ans11)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans11)=='A'||toupper(ans11)=='B'||toupper(ans11)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.Text");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans11)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans11)=='A'||toupper(ans11)=='B'||toupper(ans11)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.Text");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

            case 7:
					    printf("\n\n\nWhich the more effective while calling the c++ functions?");
		                printf("\n\nA.call by object\t\tB.call by pointer\n\nC.Call by value\t\tD.call by referance");
                        printf("\nEnter your answer:");
					    char ans12;
					    scanf("%c",&ans12);
						if (toupper(ans12)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans12)=='A'||toupper(ans12)=='B'||toupper(ans12)=='C' )
				{
					printf("\n\nWrong!!! The correct answer is D.call by referance");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans12)=='D')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans12)=='A'||toupper(ans12)=='B'||toupper(ans12)=='C')
				{
					printf("\n\nWrong!!! The correct answer is D.call by referance");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;



                case 8:
					printf("\n\n\nWhich of the following is used to terminate the function declaration in c++?");
		            printf("\n\nA.;\t\tB.]\n\nC.)\t\tD.:");
                    printf("\nEnter your answer:");
					char ans13;
					scanf("%c",&ans13);
					if (toupper(ans13)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans13)=='B'||toupper(ans13)=='C'||toupper(ans13)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is A.;");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans13)=='A')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans13)=='B'||toupper(ans13)=='C'||toupper(ans13)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;

             case 9:
					printf("\n\n\nWhich keyword is used to define the macros in c++?");
		            printf("\n\nA.#macro\t\tB.#define\n\nC.macro\t\tD.define");
                    printf("\nEnter your answer:");
					char ans14;
					scanf("%c",&ans14);
					if (toupper(ans14)=='B')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans14)=='A'||toupper(ans14)=='C'||toupper(ans14)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.#define");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans14)=='B')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans14)=='A'||toupper(ans14)=='C'||toupper(ans14)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.Bottom-up");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;


                case 10:
					printf("\n\n\nWhich of the following symbol is used to declare the preprocessor directives in c++?");
		            printf("\n\nA.$\t\tB.^\n\nC.#\t\tD.*");
                    printf("\nEnter your answer:");
					char ans15;
					scanf("%c",&ans15);
					if (toupper(ans15)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			else if(toupper(ans15)=='A'||toupper(ans15)=='B'||toupper(ans15)=='D' )
				{
					printf("\n\nWrong!!! The correct answer is C.#");getch();
                    //goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!!:");


			if (toupper(ans15)=='C')
				{
					printf("\n\nCorrect!!!");count++;
					getch();
					break;
				}
			if(toupper(ans15)=='A'||toupper(ans15)=='B'||toupper(ans15)=='D')
				{
					printf("\n\nWrong!!! The correct answer is C.#");getch();
					//goto score;
				break;

				}
				else {
					printf("\n \n Enter valid option!!!!!! 'A' 'B' 'C' 'D':");

				}
				}
				break;
		}

     }

	score:
	 system("cls");
	score=(float)countr;
    /*file handling*/
	FILE*fptr;
	float number=score;
	fptr=fopen("score.txt","a");
	if(fptr==NULL)
	{
		printf("Error opening/creating the file.\n");
	}
	else
	{
		fprintf(fptr,"\n\n%s your score is%.2f\n\n",playername,number);
		fprintf(fptr,"\n Thank You !!!!\n");
		fclose(fptr);
	}
	/*file handling*/

	//score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A WINNER!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY BETTER LUCK NEXT TIME********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
		}

	}


