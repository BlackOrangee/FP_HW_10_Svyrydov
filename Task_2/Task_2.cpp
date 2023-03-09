// Task 2. Write the game "Dices". The user and the computer take turns rolling 2 dice.
// The winner is the one who, according to the results of 3 throws, has the most amount.
// Provide a beautiful game interface.

#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	int mode = 0, force = 0, con = 0;

	//									Promo start |
	//												V
	Sleep(2000);	// Delay 2 sec
	cout << R"(
	||||||||||||   
	||        ||||
	||  ||||    ||
	||  ||  ||  ||
	||  ||  ||  ||
	||  ||  ||  || 
	||  ||  ||  || 
	||  ||  ||  || 
	||  ||||    || 
	||        |||| 
	||||||||||||  )";

	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	system("cls");
	cout << R"(
	||||||||||||   ||||||||||
	||        |||| ||      ||
	||  ||||    || ||||  ||||
	||  ||  ||  ||   ||  ||  
	||  ||  ||  ||   ||  || 
	||  ||  ||  ||   ||  ||  
	||  ||  ||  ||   ||  || 
	||  ||  ||  ||   ||  ||  
	||  ||||    || ||||  ||||
	||        |||| ||      || 
	||||||||||||   ||||||||||)";

	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	system("cls");
	cout << R"(
	||||||||||||   |||||||||| ||||||||||||||
	||        |||| ||      || ||          ||
	||  ||||    || ||||  |||| ||  ||||||||||
	||  ||  ||  ||   ||  ||   ||  ||        
	||  ||  ||  ||   ||  ||   ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||        
	||  ||  ||  ||   ||  ||   ||  ||      
	||  ||  ||  ||   ||  ||   ||  ||       
	||  ||||    || ||||  |||| ||  |||||||||| 
	||        |||| ||      || ||          || 
	||||||||||||   |||||||||| ||||||||||||||)";
	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	system("cls");
	cout << R"(
	||||||||||||   |||||||||| |||||||||||||| ||||||||||||||
	||        |||| ||      || ||          || ||          || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||||||||||
	||  ||  ||  ||   ||  ||   ||  ||         ||          ||
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||||||||||
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||         
	||  ||||    || ||||  |||| ||  |||||||||| ||  ||||||||||
	||        |||| ||      || ||          || ||          ||
	||||||||||||   |||||||||| |||||||||||||| ||||||||||||||)";
	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	system("cls");
	cout << R"(
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| |||||||||||||| 
	||        |||| ||      || ||          || ||          || ||          || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||         ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||          || ||          || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||||||||||  || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||                 ||  || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||||||||||  || 
	||        |||| ||      || ||          || ||          || ||          || 
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| ||||||||||||||)";
	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	system("cls");
	cout << R"(
	||||||||||||   |||||||||| ||||||||||||||
	||        |||| ||      || ||          ||
	||  ||||    || ||||  |||| ||  ||||||||||
	||  ||  ||  ||   ||  ||   ||  ||        
	||  ||  ||  ||   ||  ||   ||  ||        
	||  ||  ||  ||   ||  ||   ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||          
	||  ||  ||  ||   ||  ||   ||  ||         
	||  ||||    || ||||  |||| ||  ||||||||||
	||        |||| ||      || ||          ||
	||||||||||||   |||||||||| ||||||||||||||)";
	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(200);
	system("cls");
	cout << R"(
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| |||||||||||||| 
	||        |||| ||      || ||          || ||          || ||          || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||         ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||          || ||          || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||||||||||  || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||                 ||  || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||||||||||  || 
	||        |||| ||      || ||          || ||          || ||          || 
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| ||||||||||||||)";
	cout << "\n\n\tWelcome to Dices game\n";
	Sleep(500);
	//											  Ʌ
	//									Promo end |
	cout << "\n\n\t1 -- PLAY\n\t";	
	cin >> con;
	system("cls");	// Console clean
	do
	{

		while ((mode < 1) || (mode > 2)) // Mode select
		{
			cout << R"(
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| |||||||||||||| 
	||        |||| ||      || ||          || ||          || ||          || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||         ||  ||         
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||  |||||||||| 
	||  ||  ||  ||   ||  ||   ||  ||         ||          || ||          || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  |||||||||| ||||||||||  || 
	||  ||  ||  ||   ||  ||   ||  ||         ||  ||                 ||  || 
	||  ||||    || ||||  |||| ||  |||||||||| ||  |||||||||| ||||||||||  || 
	||        |||| ||      || ||          || ||          || ||          || 
	||||||||||||   |||||||||| |||||||||||||| |||||||||||||| ||||||||||||||)"; // Promo again

			/* 
			* Select gaming mode:
			* 1 -- Player <--> Computer
			* 2 -- Player 1 <--> Player 2
			*/
			cout << "\n\n\tSelect gaming mode:\n\t1 -- Player <--> Computer\n\t2 -- Player 1 <--> Player 2\n\t";
			cin >> mode;
			system("cls");
		}
		while (mode == 1)	// Player <-> Computer
		{
			int player = 0, computer = 0, force = 0, player_roll = 0, computer_roll = 0;
			for (int r = 1; r < 4; r++)	// 3 Rolls
			{
				do
				{
					cout << R"(
	   //|||||||||||//|
	  //   O    O  //||
	 //  O     O  // ||
	||||||||||||||   ||
	||          || ( ||
	||  O       ||  //
	||      O   || //
	||          ||//
	||||||||||||||
)";	// Dice image
					/*
					*  Roll the dice (1/3)
					*  1 -- Easy
					*  2 -- Normal
				    *  3 -- Strongly
					*/
					cout << "\n\n\tRoll the dice ("<< r << "/3)\n\t1 -- Easy\n\t2 -- Normal\n\t3 -- Strongly\n\t";
					cin >> force;
					system("cls");

				} while ((force < 1) && (force > 3)); // Force of roll (times of animation)

				for (int i = 0; i < force; i++)	// Dice animation
				{
					/*
					*	The dice are rolled (1,2,3/3)
					* 
					*	 00
					*	0 0
					*	000
					*/
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t 00\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t0 0\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t00 \n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t000\n\t0  \n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t00 ";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t0 0";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t 00";
					Sleep(150);
					system("cls");
					cout << "\n\n\tThe dice are rolled (" << r << "/3)";
					cout << " \n\n\t000\n\t  0\n\t000";
					Sleep(150);
					system("cls");
				}
				srand(time(NULL));
				player_roll = rand() % 6 + 1; // Random roll from 6 to 1
				player += player_roll;		  // Total score

				/*
				*			 Player  Computer
				*
			    *    Roll    0       0
				*    Total   0       0
				*/
				cout << "\n\n\t\tPlayer\tComputer\n\n\tRoll\t" << player_roll << "\t" << computer_roll << "\n\tTotal\t" << player << "\t" << computer;
				cout << R"(

	   //|||||||||||//|
	  //   O    O  //||
	 //  O     O  // ||
	||||||||||||||   ||
	||          || ( ||
	||  O       ||  //
	||      O   || //
	||          ||//
	||||||||||||||
)";	// Dice image
				cout << "\n\n\t1 -- Continue\n\t";
				cin >> con;
				do
				{
					srand(time(NULL));
					force = rand() % 3 + 1;
					

				} while ((force < 1) && (force > 3));

				for (int i = 0; i < force; i++)	// Dice animation
				{
					/*
					*	Computer rolls the dice (1,2,3/3)
					*
					*	 00
					*	0 0
					*	000
					*/
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t 00\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t0 0\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t00 \n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0  \n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t00 ";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t0 0";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t 00";
					Sleep(150);
					system("cls");
					cout << "\n\n\tComputer rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t  0\n\t000";
					Sleep(150);
					system("cls");
					
				}
				srand(time(NULL));
				computer_roll = rand() % 6 + 1;// Random roll from 6 to 1
				computer += computer_roll;// Total score

				/*
				*			 Player  Computer
				*
				*    Roll    0       0
				*    Total   0       0
				*/

				cout << "\n\n\t\tPlayer\tComputer\n\n\tRoll\t" << player_roll << "\t" << computer_roll << "\n\tTotal\t" << player << "\t" << computer<<"\n\n\n";

			}
			if (player == computer)	// Messege if draw
			{
				cout << "\n\n\tDraw";
			}
			else if (player > computer)	// If player won
			{
				cout << "\n\n\tYou Won!";
			}
			else // If Player lose
			{
				cout << "\n\n\tYou lose";
			}
			/*
			*	 0 -- Change mode
			*	 1 -- Restart
			*/
			cout << "\n\n\t0 -- Change mode\n\t1 -- Restart\n\t";
			cin >> mode;
			system("cls");
		}
		while (mode == 2)	// Player 1 <-> Player 2
		{
			int player = 0, player_2 = 0, force = 0, player_roll = 0, player_2_roll = 0;
			for (int r = 1; r < 4; r++)	// 3 Rolls
			{
				do
				{
					cout << R"(

	   //|||||||||||//|
	  //   O    O  //||
	 //  O     O  // ||
	||||||||||||||   ||
	||          || ( ||
	||  O       ||  //
	||      O   || //
	||          ||//
	||||||||||||||
)";	// Dice image
					/*
					*  Player 1 roll the dice (1/3)
					*  1 -- Easy
					*  2 -- Normal
					*  3 -- Strongly
					*/
					cout << "\n\n\tPlayer 1 roll the dice (" << r << "/3)\n\t1 -- Easy\n\t2 -- Normal\n\t3 -- Strongly\n\t";
					cin >> force;

				} while ((force < 1) && (force > 3));

				for (int i = 0; i < force; i++)	// Dice animation
				{
					/*
					*	Player 1 rolls the dice (1,2,3/3)
					*
					*	 00
					*	0 0
					*	000
					*/
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t 00\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t0 0\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t00 \n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0  \n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t00 ";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t0 0";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t 00";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 1 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t  0\n\t000";
					Sleep(150);
					system("cls");
				}
				srand(time(NULL));
				player_roll = rand() % 6 + 1; // Random roll from 6 to 1
				player += player_roll; // Total score

				/*
				*			 Player 1  Player 2
				*
				*    Roll    0         0
				*    Total   0         0
				*/
				cout << "\n\n\t\tPlayer 1\tPlayer 2\n\n\tRoll\t" << player_roll << "\t\t" << player_2_roll << "\n\tTotal\t" << player << "\t\t" << player_2;
				
				do
				{
					cout << R"(


	   //|||||||||||//|
	  //   O    O  //||
	 //  O     O  // ||
	||||||||||||||   ||
	||          || ( ||
	||  O       ||  //
	||      O   || //
	||          ||//
	||||||||||||||
)";	// Dice image
					/*
					*  Player 2 roll the dice (1/3)
					*  1 -- Easy
					*  2 -- Normal
					*  3 -- Strongly
					*/
					cout << "\n\n\tPlayer 2 roll the dice (" << r << "/3)\n\t1 -- Easy\n\t2 -- Normal\n\t3 -- Strongly\n\t";
					cin >> force;

				} while ((force < 1) && (force > 3));

				for (int i = 0; i < force; i++)	// Dice animation
				{
					/*
					*	Player 2 rolls the dice (1,2,3/3)
					*
					*	 00
					*	0 0
					*	000
					*/
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t 00\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t0 0\n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t00 \n\t0 0\n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0  \n\t000";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t00 ";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t0 0";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t0 0\n\t 00";
					Sleep(150);
					system("cls");
					cout << "\n\n\tPlayer 2 rolls the dice (" << r << "/3)";
					cout << " \n\n\t000\n\t  0\n\t000";
					Sleep(150);
					system("cls");

				}
				srand(time(NULL));
				player_2_roll = rand() % 6 + 1; // Random roll from 6 to 1
				player_2 += player_2_roll; // Total score

				/*
				*			 Player 1  Player 2
				*
				*    Roll    0         0
				*    Total   0         0
				*/
				cout << "\n\n\t\tPlayer 1\tPlayer 2\n\n\tRoll\t" << player_roll << "\t\t" << player_2_roll << "\n\tTotal\t" << player << "\t\t" << player_2;

			}
			if (player == player_2)	// Messege if draw
			{
				cout << "\n\n\tDraw";
			}
			else if (player > player_2) // Messege if Player 1 won
			{
				cout << "\n\n\tPlayer 1 Won!";
			}
			else // Messege if Player 2 won
			{
				cout << "\n\n\tPlayer 2 Won!";
			}
			/*
			*	 0 -- Change mode
			*	 1 -- Restart
			*/
			cout << "\n\n\t0 -- Change mode\n\t1 -- Restart\n\t";
			cin >> mode;
			system("cls");
		}
	} while (true);
}
