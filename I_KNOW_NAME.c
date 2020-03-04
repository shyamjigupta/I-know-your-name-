# I-know-your-name-
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
unsigned long int FirstInput,SecondInput,b[20],k,c;
int j,d=1,f[20],n=0,ch;
void main()
{
	top:
	system("cls");
	printf("\n Enter In Game \n");
char a[4][7]={{'A','E','I','M','Q','U','Y'},
			{'B','F','J','N','R','V','Z'},
			{'C','G','K','O','S','W'},
			{'D','H','L','P','T','X'}};
	for(int i=1;i<=4;i++)
		printf("\t%d\t",i);
		printf("\n");
	for(char i=65; i<=90;i++)
	{
		if(i==68||i==72||i==76||i==80||i==84||i==88)
		{
			printf("\t%c\n",i);
		}
		else
			printf("\t%c\t",i);
	}
	printf("\n\nEnter Your choice : ");
	scanf("%ld",&FirstInput);
	system("cls");

for(int i=1;i<=7;i++)
			printf("%d\t",i);
		printf("\n");
	for(long int i=FirstInput;i!=0;i=i/10)
	{	
		c=i%10;
		b[d]=c;
		d++;
		if(c==0 && c>4)
		{
			printf("You are Entered Wrong ");
		}
		else if(c==1)
		{
			for(j=0;j<7;j++)
			{
				printf("%c\t",a[0][j]);
			}printf("\n");
		}
		else if(c==2)
		{
			for(j=0;j<7;j++)
			{
				printf("%c\t",a[1][j]);
			}printf("\n");
		}
		else if(c==3)
		{
			for(j=0;j<6;j++)
			{
				printf("%c\t",a[2][j]);
			}printf("\n");
		}
		else if(c==4)
		{
			for(j=0;j<6;j++)
			{
				printf("%c\t",a[3][j]);
			}printf("\n");
		}
	}
	printf("Enter Again Same  :");
	scanf("%ld",&SecondInput);
	
long int j=SecondInput;
	for(long int i=FirstInput;i!=0;i=i/10)
	{
		c=i%10;
	if(j==0)
	{
		break;
	}
	else
	{
	k=j%10;
		//printf("%c",a[c-1][k-1]);
		j=j/10;
		f[n]=a[c-1][k-1];
		n++;
	}
	}
	system("cls");
	printf("\t\t\tHy I AM Thinking dud !\n");
	sleep(2);
	system("cls");
	printf("\t\t\tResult ready !\n\n\n");
	sleep(2);
	printf("\n\n\n\n\t\t\t\t\t\t\tYour Name :- ");
	for(int i=n;i>0;i--)
	{
		printf("%c",f[i-1]);
		n--;
	}
	sleep(2);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tAre You Want to Play again !  press 1 \n\t\t\t\t if you want to Exit press anything \n");
	scanf("%d",&ch);
	if(ch==1)
		goto top;
else if(ch<0 && ch>0)
	printf("\nWrong Input");
else 
	{
		printf("Thank You ");
	}
	getch();
}

