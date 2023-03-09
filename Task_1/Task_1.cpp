// Task 1. Write a program that displays a line with a given symbol, vertical or horizontal, on the screen,
// and the line can be displayed quickly, normally and slowly.
// Communication with the user can be organized through the menu.
//

#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    
    cout << R"(

 |||  ||| ||||||| |||     |||     |||||||    |||     ||| ||||||| ||||||||   |||     ||||||  ||| 
 | |  | | |     | | |     | |     |     |    | |     | | |     | |      |   | |     |    || | | 
 | |  | | | ||||| | |     | |     | ||| |    | |     | | | ||| | | |||| |   | |     | ||  | | |
 | |  | | | |     | |     | |     | | | |    | |     | | | | | | | |  | |   | |     | | | | | | 
 | |||| | |||||   | |     | |     | | | |    | | ||| | | | | | | | |||| |   | |     | | | | | | 
 |      |     |   | |     | |     | | | |    | | | | | | | | | | |      |   | |     | | | | | | 
 | |||| | |||||   | |     | |     | | | |    | | | | | | | | | | | ||| ||   | |     | | | | ||| 
 | |  | | | |     | |     | |     | | | |    | ||| ||| | | | | | | |  | |   | |     | | | |        
 | |  | | | ||||| | ||||| | ||||| | ||| |    |         | | ||| | | |  | ||| | ||||| | ||  | ||| 
 | |  | | |     | |     | |     | |     |    | ||| ||| | |     | | |  |   | |     | |    || | | 
 |||  ||| ||||||| ||||||| ||||||| |||||||    ||| ||| ||| ||||||| |||  ||||| ||||||| ||||||  |||)";	// Program logo
	
	string n = " ";
	int a = 500, dir = 0, time = 8, menu = 0;
	do
	{
		while ((dir < 1) || (dir > 2))	// Direction choose 
		{
			/*
			* Choose the direction of word output:
			* 1 -- Horizontal
			* 2 -- Vertical
			*/
			
			cout << "\n\n\tChoose the direction of word output:\n\t1 -- Horizontal\n\t2 -- Vertical\n\t";
			cin >> dir;
			
			if (dir == 2) // Vertical
			{
				n = "\n\t";
			}
			else if (dir == 1)	// Horizontal
			{
				n = " \b";
			}
			
		}
		while ((time < 1) || (time > 4)) // Delay time choose
		{
		
			/*
			* Choose the delay time:
			* 1-- Fast (0.1 sec)
			* 2 -- Normal (0.6 sec)
			* 3 -- Slow (1.2 sec)
			* 4 -- Custom
			*/
			cout << "\n\n\tChoose the delay time:\n\t1-- Fast (0.1 sec)\n\t2 -- Normal (0.35 sec)\n\t3 -- Slow (1 sec)\n\t4 -- Custom\n\t";
			cin >> time;

			switch (time)
			{
			case 1:	// 0.1 sec
				a = 100;
				break;
			case 2:	// 0.6 sec
				a = 350;
				break;
			case 3:	// 1.2 sec
				a = 1000;
				break;
			case 4:	// custom
				cout << "\n\tEnter time in milliseconds: ";
				cin >> a;
				break;
			default:
				break;
			}
			
		}

		/*
		* Confirm you chooses:
        * 0 -- Confirm
        * 1 -- Change direction
        * 2 -- Change time
		* 3 -- Rabbit?
		*/
		cout << "\n\n\tConfirm you chooses:\n\t0 -- Confirm\n\t1 -- Change direction\n\t2 -- Change time\n\n\t3 -- Rabbit?\n\t";
		cin >> menu;
		if (menu == 1) // If choose direction changing
		{
			dir = 0;
		}
		if (menu == 2) // If choose time changing
		{
			time = 0;
		}
	} while ((menu !=0 ) && (menu != 3));
	
	while (menu == 0)	// HELLO WORLD!
	{
		Sleep(a);	// Sleep time
		system("cls");	// Cleean console
		cout << "\n\n\tH" << n;
		Sleep(a);
		cout << "E" << n;
		Sleep(a);
		cout << "L" << n;
		Sleep(a);
		cout << "L" << n;
		Sleep(a);
		cout << "O" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "W" << n;
		Sleep(a);
		cout << "O" << n;
		Sleep(a);
		cout << "R" << n;
		Sleep(a);
		cout << "L" << n;
		Sleep(a);
		cout << "D" << n;
		Sleep(a);
		cout << "!" << n;
	}
	while (menu == 3) // Wake up Neo follow the White Rabbit
	{
		Sleep(a);	// Sleep time
		system("cls");	// Cleean console
		cout << "\n\n\tW" << n;
		Sleep(a);
		cout << "a" << n;
		Sleep(a);
		cout << "k" << n;
		Sleep(a);
		cout << "e" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "u" << n;
		Sleep(a);
		cout << "p" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "N" << n;
		Sleep(a);
		cout << "e" << n;
		Sleep(a);
		cout << "o" << n;
		Sleep(2000);
		system("cls");
		cout << "\n\n\tF" << n;
		Sleep(a);
		cout << "o" << n;
		Sleep(a);
		cout << "l" << n;
		Sleep(a);
		cout << "l" << n;
		Sleep(a);
		cout << "o" << n;
		Sleep(a);
		cout << "w" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "t" << n;
		Sleep(a);
		cout << "h" << n;
		Sleep(a);
		cout << "e" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "W" << n;
		Sleep(a);
		cout << "h" << n;
		Sleep(a);
		cout << "i" << n;
		Sleep(a);
		cout << "t" << n;
		Sleep(a);
		cout << "e" << n;
		Sleep(a);
		cout << " " << n;
		Sleep(a);
		cout << "R" << n;
		Sleep(a);
		cout << "a" << n;
		Sleep(a);
		cout << "b" << n;
		Sleep(a);
		cout << "b" << n;
		Sleep(a);
		cout << "i" << n;
		Sleep(a);
		cout << "t" << n;
		Sleep(2000);
	}
}