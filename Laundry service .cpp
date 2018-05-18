/*
	insert group members and matrics here.
	also try to add some comments(i have to sleep).
*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <unistd.h>
#include <cstdlib>
#include "tags.cpp"
using namespace std;
char waem , cold, hot , complete[10], answ_add;
int type, standar_ret, x, type_wash, add;
float price = 0;
void tags();
void summery();
int main()
{

	do
	{

		cout << "			--------------------------------------------------\n\n";
		cout << "				Welcome To Our  Laundry Service\n" << endl;
		cout << "			--------------------------------------------------\n\n";
		sleep(2);
		cout << "Please Select Machine Size:" << endl
		     << "1. Normal (1kg -  5kg)" << endl
		     << "2. Large  (6kg to 10kg)" << endl << endl;
		do
		{
			cin >> type;
			if (type == 1)
			{
				sleep(1);
				cout << endl << "You Have Chosen Normal Sized Machine Which Is Less Than 6kg!" << endl << endl;
				price += 10;
				break;
			}
			else if (type == 2)
			{
				sleep(1);
				cout << endl << "You Have Chosen Large Sized Machine Which Is More Than 6kg!" << endl << endl;
				price += 20;
				break;
			}
			else
			{
				sleep(1);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >> type;
			}
		} while (type != 1 || type != 2);
		sleep(2);
		tags();
		cout << "\nPlease Select Wash Type:" << endl
		     << "1. Warm" << endl
		     << "2. Hot " << endl
		     << "3. Cold" << endl << endl;
		cin >> type_wash;
		do
		{
			if (type_wash == 1)
			{
				sleep(1);
				cout << endl << "Warm Wash Selected!" << endl << endl;
				break;
			}
			else if (type_wash == 2)
			{
				sleep(1);
				cout << endl << "Hot Wash Selected!" << endl << endl;
				break;
			}
			else if (type_wash == 3)
			{
				sleep(1);
				cout << endl << "Cold Wash Selected!" << endl << endl;
				break;
			}
			else
			{
				sleep(1);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >> type_wash;
			}
		} while (type_wash != 1 || type_wash != 2 || type_wash != 3);
		price += type_wash * 3.5;
		tags();
		cout << "\nPlease Select Service Time: " << endl
		     << "1. 30 Minutes " << endl
		     << "2. 20 Minutes " << endl
		     << "3. 10 Minutes" << endl << endl;
		cin >> standar_ret;
		do
		{
			if (standar_ret == 1)
			{
				sleep(1);
				cout << endl << "You've Chosen 30 Min Service Time!" << endl << endl;
				break;
			}
			else if (standar_ret == 2)
			{
				sleep(1);
				cout << endl << "You've Chosen 20 Min Service Time!" << endl << endl;
				break;
			}
			else if (standar_ret == 3)
			{
				sleep(1);
				cout << endl << "You've Chosen 10 Min Service Time!" << endl << endl;
				break;
			}
			else
			{
				sleep(1);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >> standar_ret;
			}
		} while (standar_ret != 1 || standar_ret != 2 || standar_ret != 3);
		sleep(2);
		tags();
		cout << "\nWould you like to additional drying detergent(Y or N)? ";
		cin >> answ_add;
		while (answ_add != 'y' && answ_add != 'Y' && answ_add != 'n' && answ_add != 'N')
		{
			sleep(1);
			cout << "Please Input Y or N: ";
			cin >> answ_add;
		}
		if (answ_add == 'y' || answ_add == 'Y')
		{
			sleep(1);
			price = price + 1.5;
			cout << "\nPlease Select Dryer Type:" << endl
			     << "1. Thermal dryer" << endl
			     << "2. Air dryer" << endl << endl;

			do
			{
				cin >> add;
				if (add == 1)
				{
					sleep(1);
					cout << endl << "Thermal Dryer Selected!" << endl << endl;
					break;
				}
				else if (add == 2)
				{
					sleep(1);
					cout << endl << "Air Dryer Selected" << endl << endl;
					break;

				}
				else
				{
					sleep(1);
					cout << "\nInvalid Input! " << endl
					     << "Please Try again: " << endl;
					cin >> add;
				}
			} while (add != 1 || add != 2);
		}
		else if (answ_add == 'n' || answ_add == 'N')
		{
			sleep(1);
			cout << "\nNo Dryer Type Selected!" << endl
			     << "Selecting Default (Thermal)" << endl
			     << "Proceeding..." << endl << endl;
		}
		summery();
		sleep(1);
		cout << "\nStarting Your Service..." << endl;
		sleep(2);
		cout << "Service Ongoing..." << endl;
		switch (standar_ret)
		{
		// change sleep interval based on selected time period.
		case 1: sleep(10); break;
		case 2: sleep(7); break;
		case 3: sleep(5); break;
		}
		cout << "Service Finished!" << endl << endl;
		tags();
		sleep(1);
		cout << "\nthank You For Using Our Service!" << endl << endl;
		sleep(1);
		cout << "Please Come Back Again" << endl << endl;
		tags();
		cout << "\nPlease Type Next for Next User!" << endl << endl;
		cin >> complete;
	} while (strcmp(complete, "next") == 0 || strcmp (complete, "Next") == 0);

	return 0;
}
void summery()
{
	sleep(2);
	tags();
	cout << endl << setw(17) << left << "Machine Type";
	switch (type)
	{
	case 1: cout << ": Normal" << endl; break;
	case 2: cout << ": Large" << endl; break;
	}
	cout << setw(17) << left << "Wash Type";
	if (type_wash == 1)
	{
		cout << ": Warm" << endl;
	}
	else if (type_wash == 2)
	{
		cout << ": Hot" << endl;
	}
	else if (type_wash == 3)
	{
		cout << ": Cold" << endl;
	}
	cout << setw(17) << left << "Service Time";
	switch (standar_ret)
	{
	case 1: cout << ": 30 Minutes" << endl; break;
	case 2: cout << ": 20 Minutes" << endl; break;
	case 3: cout << ": 10 Minutes" << endl; break;
	}
	cout << setw(17) << left << "Total Price" << ": RM" << price << endl << endl;
	tags();
}
