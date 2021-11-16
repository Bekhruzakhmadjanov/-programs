



// RULES OF GAME :
// 1. First player will select a card.
// 2. Now, the second player will select a card.
// 3. If the second player selects a card of the same value as selected by the first player, he will get points.
// 4. Now, the second player will first select a card and then first player
// 5. If first player selects a card of the same value as selected by the second player then he will get points.
// 6. Repeat steps 1 to 5.
// 7. Player with more score will win the game.





#include <stdio.h>
#include <string.h>
#include <stdlib.h>//for srand and screen clear and echo off and on
#include <time.h>//for shuffling



int main()
{
	system("clear");//screen clear
	int i,j,z,k,lp;
	char s,rc;
	struct card
	{
		char *value;
		char *suite;
	};
	struct card temp,list[52],player1[26],player2[26];
	//temp for swaping

	char *value[] = {"A","2","3","4","5","6","7","8","9","10","K","Q","J"};
	char *suite[] = {"diamond","spade","heart","club"};
	for (i = 0;i < 52;i++)
	{
		if(i < 13)
		{
			list[i].suite=*(suite);
			list[i].value=*(value+i);
		}
		else if(i >= 13&&i<26)
		{
			list[i].suite=*(suite+1);
			list[i].value=*(value+(i-13));
		}
		else if(i >= 26&&i<39)
		{
			list[i].suite=*(suite+2);
			list[i].value=*(value+(i-26));
		}
		else if(i >= 39)
		{
			list[i].suite=*(suite+3);
			list[i].value=*(value+(i-39));
		}
	}


	do//do while to ask after game play more ?y or n:
	{


	//shuffling



	int n = 52;
	srand(time(NULL));
	for(i = n-1;i > 0;i--)
	{
		int j=rand()%(i+1);
		temp.value=list[i].value;
		temp.suite=list[i].suite;
		list[i].value=list[j].value;
		list[i].suite=list[j].suite;
		list[j].value=temp.value;
		list[j].suite=temp.suite;
	}




	//distributing cards
	for(i = 0;i < 52;i++)
	{
		if(i < 26)
		{
			player1[i].value=list[i].value;
			player1[i].suite=list[i].suite;
		}
		else if(i >= 26)
		{
			player2[i-26].value=list[i].value;
			player2[i-26].suite=list[i].suite;
		}
	}


	//for cards info
	printf("Player1 has:\t\t\tPlayer2 has:\n");
	for (i = 0;i < 26;i++)
		printf("%d\t%s\t%s\t\t%d\t%s\t%s\n",i+1,player1[i].value,player1[i].suite,i+1,player2[i].value,player2[i].suite);




	printf("YOUR INPUT WILL NOT BE VISIBLE\n");



	int p1score = 0,p2score = 0;
	char a[10],b[10];
	char c[10],d[10];



	for (j = 0;j < 26;j++)
	{





		system("stty -echo");//echo off. input will not be visible





		//even value of i will first let player1 to play and odd value to player 2
		if(j%2==0)
		{

			int x = 0;
			do
			{
				printf("Player1: type value and suite:");
				scanf("%s %s",&a[0],&b[0]);

				for (i = 0;i < 26;i++)
				{
					//checking if player owns card or not
					z=strcmp(player1[i].value,a);
					k=strcmp(player1[i].suite,b);

					if(z == 0 && k == 0)
					{
						//removing used cards
						player1[i].value="\0";
						player1[i].suite="\0";

						x++;
					}

				}
				if (x == 0)
				printf("ENTER CORRECT CARD\n");
			}while(x == 0);


			int y = 0;
			do
			{
				printf("Player2: type value and suite:");
				scanf("%s %s",&c[0],&d[0]);

				for (i = 0;i < 26;i++)
				{

					z=strcmp(player2[i].value,c);
					k=strcmp(player2[i].suite,d);

					if(z == 0 && k == 0)
					{
						player2[i].value="\0";
						player2[i].suite="\0";

						y++;
					}

				}
				if (y == 0)
				printf("ENTER CORRECT CARD\n");
			}while(y == 0);




			//score if player2 choose same card
			lp = strcmp(a,c);

			if(lp == 0)
			p2score = p2score+10;

		}




		else//if i is odd first turn to player2
		{

			int y = 0;
			do
			{
				printf("Player2: type value and suite:");
				scanf("%s %s",&c[0],&d[0]);

				for (i = 0;i < 26;i++)
				{

					z=strcmp(player2[i].value,c);
					k=strcmp(player2[i].suite,d);

					if(z == 0 && k == 0)
					{
						player2[i].value="\0";
						player2[i].suite="\0";

						y++;
					}

				}
				if (y == 0)
				printf("ENTER CORRECT CARD\n");
			}while(y == 0);



			int x = 0;
			do
			{
				printf("Player1: type value and suite:");
				scanf("%s %s",&a[0],&b[0]);

				for (i = 0;i < 26;i++)
				{

					z=strcmp(player1[i].value,a);
					k=strcmp(player1[i].suite,b);

					if(z == 0 && k == 0)
					{
						player1[i].value="\0";
						player1[i].suite="\0";

						x++;
					}

				}
				if (x == 0)
				printf("ENTER CORRECT CARD\n");
			}while(x == 0);


			lp = strcmp(a,c);

			if(lp == 0)
			p1score = p1score+10;

		}

		//to see remaining cards

		printf("\nPlayer1 has:\t\t\tPlayer2 has:\n");
		for (i = 0;i < 26;i++)
			printf("%d\t%s\t%s\t\t%d\t%s\t%s\n",i+1,player1[i].value,player1[i].suite,i+1,player2[i].value,player2[i].suite);



		printf("\nPLAYER1 SCORE:%d\tPLAYER2 SCORE:%d\n\n",p1score,p2score);




		system("stty echo");//echo on


	}





	if(p1score > p2score)
		printf("PLAYER1 WINS\n");
	else if(p1score < p2score)
		printf("PLAYER2 WINS\n");
	else
		printf("MATCH DRAWS\n");



	//if one has to play more...do while loop

	printf("want to play more? y or n:");
	scanf(" %c",&s);
	}while(s == 'y');

}