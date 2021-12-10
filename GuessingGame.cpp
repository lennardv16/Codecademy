//C++ Program			Project2.cpp
//Course				CSE1301, Section 2
//Name					Lennard Vicente
//Assignment			Project #2
//Due Date				October 2, 2015

/* Purpose: Generates a random number between 1 and 100 and the user tries to guess the number */

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int randNumber, userNumber, count;
	count = 0;
	char choice;
	cout<< "Would you like to play a game? y/n"<< endl;
	cin>> choice;
	do
	{
		randNumber = rand() % 100 + 1;
		cout<< "Guess a number between 1 to 100 or -1 to quit."<< endl;
		cin>> userNumber;
		do
		{
			if (userNumber == -1)
			{
				cout<< "User quit game after "<< count<< " guesses."<< endl;
				return 0;
			}			
			else if (userNumber < -1 || userNumber == 0 || userNumber > 100)
			{
				count++;
				cout<< "Out of range, try again."<< endl;
				cin>> userNumber;
			} 	
			else if (userNumber < randNumber)
			{
				count++;
				cout<< "Too low, try again."<< endl;
				cin>> userNumber;
			}
			else if (userNumber > randNumber)
			{
				count++;
				cout<< "Too high, try again."<< endl;
				cin>> userNumber;
			}	
		}
		while (userNumber != randNumber);
		if (userNumber == randNumber)
		{
			count++;
			cout<< "You guessed correctly!"<< endl;
			cout<< "The random number was "<< randNumber<< endl;
			cout<< "It took you "<< count<< " guesses to get the right number"<< endl;
		}
		count=0;
		cout<< "Would you like to play again? y/n"<< endl;
		cin>> choice;
		if (choice == 'n')
		{
			cout<< "Thanks for playing!"<< endl;
		}
	}
	while (choice == 'y');	
	cout<< "Coded by Lennard Vicente"<< endl;
	system ("pause");
	return 0;
}

