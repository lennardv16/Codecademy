// C++ Program:				Project4.cpp
// Course:					CSE1311, Section 2
// Name:					Lennard Vicente
// Assignment #:			Project #4
// Due Date:				December 2, 2015

// Purpose: The purpose of this program is to arrange how many people can get in an elevator with a limit weight of 1100 lbs. The people will be assorted in 
// ascending and descending order along with their weights. The program will then determine which is the best method to have the most people in the elevator.

#include <iostream>

using namespace std;

int t1, t2, t3=0;
string n[] = {"Anne", "Bob", "Ralph", "Tim", "Barbara", "Jane", "Steve", "Tom", "Mike", "Shirley", "Pam", "Frank"};
int w[] = {130, 150, 305, 225, 135, 160, 85, 200, 165, 90, 125, 120};

void printArray(int x)
{
	cout<< "Name \t\t Weight"<< endl;
	cout<< "-----------------------"<< endl;
	for (int i = 0; i < x; i++)
	{
		cout<< n[i]<< "\t\t  "<< w[i]<< endl;
	}
	cout<< "-----------------------"<< endl;
}

int howMany()
{
	int total=0, i=0;
	while (total <= 1100)
	{
		total += w[i];
		i++;
	}
	i--;
	total -= w[i];
	cout<< "The total weight is: "<< total<< " lbs"<< endl;
	cout<< "The elevator can hold "<< i<< " people"<< endl;
	cout<< "------------------------------"<< endl<< endl;
	return i;
}

void ascSort()
{
	cout<< endl;
	cout<< "Weights in ascending order"<< endl;
	cout<< "------------------------"<< endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (w[j] > w[i])
			{
				int temp = w[i];
				w[i] = w[j];
				w[j] = temp;
				string temp1 = n[i];
				n[i] = n[j];
				n[j] = temp1;
			}
		}
	}
}

void descSort()
{
	bool sorted;
	int temp;
	int numPairs=11;
	do
	{
		sorted=true;
		for(int i=0;i<11;i++)
		if(n[i]<n[i+1])
		{
			temp=w[i];
			w[i]=w[i+1];
			w[i+1]=temp;
			string temp1=n[i];
			n[i]=n[i+1];
			n[i+1]=temp1;
			sorted=false;
		}
		numPairs--;
	}
	while(sorted==false);
	cout<< endl;
	cout<< "Names in descending order"<<endl;
	cout<< "-------------------------"<< endl;
}

void bestOrder()
{
	cout<< endl;
	cout<< "Best function"<<endl;
	cout<< "--------------"<<endl;
	if (t1>t2 && t1>t3)
	{
		cout<< "Most efficient in current order, elevator can hold "<< t1<< " people."<< endl;
	}
	if (t2>t1 && t2>t3)
	{
		cout<< "Most efficient by weight, elevator can hold "<< t2<< " people."<< endl;
	}
	if (t3>t1 && t3>t2)
	{
		cout<< "Most efficient by name, elevator can hold "<< t3<< " people."<< endl;
	}
	cout<< "--------------"<<endl;
}

int main()
{
	printArray(12);
	t1=howMany();
	printArray(t1);
	ascSort();
	printArray(12);
	t2=howMany();
	printArray(t2);
	descSort();
	printArray(12);
	t3=howMany();
	printArray(t3);
	bestOrder();
	cout<< "Coded by Lennard Vicente"<< endl;
	system("pause");
	return 0;
}
