// C++ Program			DaysoftheWeek.cpp
// Course				CSE1311, Section 02
// Name:				Lennard Vicente
// Assignment #:		Project #1
// Due Date:			September 4, 2015

/* Purpose: Computes the day of the week for any day that the user enters. A month, day, and year
will be entered, then the program will display the day of the week for the date as a number
between 0 and 6 */

#include <iostream>
using namespace std;
int main()
{
	int q, m, k, j, h;
	cout<< "Enter the month ";
	cin>> m;
	cout<< "Enter the day ";
	cin>> q;
	cout<< "Enter the century ";
	cin>> j;
	cout<< "Enter the year ";
	cin>> k;
	h=(q+(26*(m+1))/10+k+k/4+j/4+5*j)%7;
	if (h==0)
	{
		cout<< "The Day of the Week is Saturday"<< endl;
	}
	else if (h==1)
	{
		cout<< "The Day of the Week is Sunday"<< endl;
	}
	else if (h==2)
	{
		cout<< "The Day of the Week is Monday"<< endl;
	}
	else if (h==3)
	{
		cout<< "The Day of the Week is Tuesday"<< endl;
	}
	else if (h==4)
	{
		cout<< "The Day of the Week is Wednesday"<< endl;
	}
	else if (h==5)
	{
		cout<< "The Day of the Week is Thursday"<< endl;
	}
	else
	{
		cout<< "The Day of the Week is Friday"<< endl;
	}
	cout<< "Coded by Lennard Vicente "<< endl;
	system ("pause");
	return 0;
}