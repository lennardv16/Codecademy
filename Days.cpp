// C++ Program:			Project3.cpp
// Course:				CSE1311, Section 2
// Name:				Lennard Vicente
//Assignment #:			Project #3
// Due Date:			October 28, 2015

//Purpose: The purpose of this lab is to calculate the days in between two dates. It will ask for two dates in which the month, day, and year will be entered.

#include <iostream>
#include <fstream>

using namespace std;

bool isLeap (int y)
{
	if (y % 400 == 0)
	{
		return true;
	}
	else if (y % 4 == 0 && y % 100 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int daysInYear (int y)
{
	if (isLeap(y))
	{
		return 366;
	}
	else
	{
		return 365;
	}
}

int daysInMonth (int m, int y)
{
	switch(m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;
		case 2: if (isLeap(y))
				{
					return 29;
				}
				else
				{
					return 28;
				}	
	}
}

int main()
{
	ifstream fin ("input.txt");
	ofstream fout ("output.txt");
	int total = 0, m1, m2, d1, d2, y1, y2;
	fin>> m1>> d1>> y1>> m2>> d2>> y2;
	while (m1 != -1)
	{
		if ( y1 == y2)
		{
			if ( m1 == m2)
			{
				total = (d2 - d1) + 1;
			}
			else
			{
				total = daysInMonth(m1, y1) - d1 + 1;
				for (int i = m1 + 1; i < m2; i++)
				{
					total += daysInMonth(i, y1);
				}
				total += d2;
			}
		}
		else
		{
			total = daysInMonth(m1, y1) - d1 + 1;
			for (int i = m1 + 1; i <= 12; i++)
			{
				total += daysInMonth(i, y1);
			}
			for (int i = (y1 + 1); i < y2; i++)
			{
				total += daysInYear(i);
			}
			for (int i = 1; i < m2; i++)
			{
				total += daysInMonth(i, y2);
			}
			total += d2;
		}
		cout<< "Days between the two dates: "<< total<< " days"<<endl;
		fin>> m1>> d1>> y1>> m2>> d2>> y2;
	}
	cout<< "Coded by Lennard Vicente"<< endl;
	system ("pause");
	return 0;
}
