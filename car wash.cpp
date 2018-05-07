/* group members:
	- Abubakar Yagoub     1625897
 	- Hanan Allil 			1617888
	 -
 */
// time to start commenting everything for no reason(because why not)
// too many sleep() to make it more realistic
#include <iostream> // standard library
#include <iomanip> // output manipulation library
#include <string.h> // C library (for strcpy)
#include "payment.h" // external header file
#include <time.h> //time library
using namespace std;
void stars(); // decoration
void tags(); // decoration
void Services(); // services and their options etc.
void Receipt(); // print Receipt after service is finished
void Meta(); // generate a service number and get today's date and stuff.
void Another_Service(); // function to let user choose another service after finishing first service
// void Payment(); // redundant (already defined in header file)
int main()
{
	cout << "			--------------------------------------------------\n\n";
	cout << "				Welcome To Our Car Washing Service\n" << endl;
	cout << "			--------------------------------------------------\n\n";
	sleep(2);
	cout << "\nPlease Select Vehicle Type: " << endl << endl // prompt user to select vehicle type.
	     << "1. Car" << endl
	     << "2. Motor Bike" << endl
	     << "3. Truck " << endl <<  endl;
	cin >> vehicle_type;// should be vehicle type (check)
	while (vehicle_type > 3 || vehicle_type < 1) // just in case you think you're smart.
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> vehicle_type;
	}
	// copy string to an array space using strcpy.
	strcpy(Serv[0], "Wash");
	strcpy(Serv[1], "Scrub");
	strcpy(Serv[2], "Rinse");
	strcpy(Serv[3], "Steam");
	strcpy(Serv[4], "Vacuum");
	strcpy(Serv[5], "Wax");
	sleep(2); // stop the program for 2 seconds.
	cout << "\nSelect Service: " << endl << endl;
	for (int i = 1; i <= 6; ++i) // output array content by cell
	{
		cout << i << ". " << Serv[i - 1] << endl;
	}
	cout << endl;
	cin >> service;
	while (service > 6 || service < 1) // just in case you think you're smart
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> service;
	}
	Services();//call
	return 0;
}
void Services() // services function.
{
	sleep(2);
	if (service == 1)
	{
		cout << "\nSelect The Type Of Wash You Want: \n" << endl
		     << setw(20) << left << "1. Basic Wash" << setw(3) << left << "RM" << w_price[0] << endl
		     << setw(20) << left << "2. Advanced Wash" << setw(3) << left << "RM" << w_price[1] << endl
		     << setw(20) << left << "3. Premium Wash" << setw(3) << left << "RM" << w_price[2] << endl << endl;
		cin >> w_type;
		while (w_type > 3 || w_type < 1) // you're not smart
		{
			sleep(1);
			cout << "Please Select A Valid Option: ";
			cin >> w_type;
		}
		sleep(1);
		switch (w_type) // give visual output of selected service before processing.
		{
		case 1: cout << "\nBasic Wash Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		case 2: cout << "\nAdvanced Wash Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		case 3: cout << "\nPremium Wash Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		}
	}
	if (service == 2)
	{
		cout << "\nPlease Select The  Scrub Type You Want: \n" << endl
		     << setw(20) << left << "1. Basic Scrub" << setw(3) << left << "RM" << scrub_price[0] << endl
		     << setw(20) << left << "2. Advanced Scrub" << setw(3) << left << "RM" << scrub_price[1] << endl
		     << setw(20) << left << "3. Premium Scrub" << setw(3) << left << "RM" << scrub_price[2] << endl << endl;
		cin >> scrub_type;
		while (scrub_type > 3 || scrub_type < 1) // you should be aware of that by now
		{
			sleep(1);
			cout << "Please Select A Valid Option: ";
			cin >> scrub_type;
		}
		sleep(1);
		switch (scrub_type) // give visual output of selected service before processing.
		{
		case 1: cout << "\nBasic Scrub Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		case 2: cout << "\nAdvanced Scrub Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		case 3: cout << "\nPremium Scrub Selected\n" << endl;
			sleep(1);
			cout << "Proceeding To Payment..." << endl << endl; break;
		}
	}
	if (service == 3)
	{
		cout << "\nRinse Service Selected\n" << endl;
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (service == 4)
	{
		cout << "\nSteam Service Selected...\n" << endl;// should be steam service
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (service == 5)
	{
		cout << "\nVacuum Service Selected...\n" << endl;
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (service == 6)
	{
		cout << "\nWax Service Selected\n" << endl;
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	Payment(); // go to payment function in header file
	Receipt(); // go to receipt after finishing payment part
}


void Receipt()
{
	cout << endl << "Starting Your Service..." << endl;
	sleep(3);
	cout << "\npress Any Key To Start: ";
	cin >> start_yn; // input anything here just to make sure the user wants the service to start now
	sleep(2);
	cout << endl << "Service ongoing..." << endl;
	sleep(10); // assuming in these 10 seconds  the operation is completed
	cout << "\nOperation Completed!!" << endl << endl; // skip 2 lines
	sleep(2);
	stars();
	cout << endl <<  "Here Is Your Receipt:" << endl;
	sleep(2);
	Meta(); //call function to generate service id and time
	cout << endl << setw(15) << left <<  "Date " << ": " << day << "-" << mon << "-" << year << endl;
	sleep(1);
	cout << endl << setw(15) << left <<  "Service ID" << ": " << serv_id << endl;
	cout << endl << setw(15) << left <<  "Vehicle Type" << ": ";
	switch (vehicle_type)
	{
	case 1 : cout << "Car"; break;
	case 2 : cout << "Motor Bike"; break;
	case 3 : cout << "truck"; break;
	}
	cout << endl <<  endl <<  setw(15) << left <<  "Service Type" << ": ";
	switch (service)
	{
	case 1 :
		if (w_type == 1)
		{
			cout << "Basic Wash" << endl; break;
		}
		else if (w_type == 2)
		{
			cout << "Advanced Wash" << endl; break;
		}
		else if (w_type == 3)
		{
			cout << "Premium Wash" << endl; break;
		}
	case 2 :
		if (scrub_type == 1)
		{
			cout << "Basic Scrub" << endl; break;
		}
		else if (scrub_type == 2)
		{
			cout << "Advanced Scrub" << endl; break;
		}
		else if (scrub_type == 3)
		{
			cout << "Premium Scrub" << endl; break;
		}
	case 3 : cout << "Rinse" << endl; break;
	case 4 : cout << "Steam" << endl; break;
	case 5 : cout << "Vacuum" << endl; break;
	case 6 : cout << "Wax" << endl; break;
	}
	sleep(1);
	cout << endl <<  setw(15) << left <<  "Payment Amount" << ": RM" << total << endl << endl; // total is the payment amount, no algorithm needed
	tags();
	cout << endl << "Would You Like To Perform Another Operation (yes or no)? ";
	cin >> as_yn;
	if (strcmp(as_yn, "yes") == 0)
	{
		Another_Service();

	}
	else if (strcmp(as_yn, "no") == 0) // new option to check if user wants a to perform another operation or not
	{
		sleep(2);
		cout << "\nthank you for using our services" << endl;
		cout << "\nPlease come back again!!" << endl;

	}

	sleep(5);

}
void Meta()
{
	// copy week days to week array
	strcpy(week[0], "Sunday") ;
	strcpy(week[1], "Monday") ;
	strcpy(week[2], "Tuesday") ;
	strcpy(week[3], "Wednesday") ;
	strcpy(week[4], "Thursday") ;
	strcpy(week[5], "Friday") ;
	strcpy(week[6], "Saturday") ;
	srand(time(NULL)); // set run time to null so you get a different number each time you run the program.
	serv_id = 1 + rand() % (1 - 100 + 1); // generate a number between 1 and 100.
	time_t t = time(NULL); // set the time to null so it will read the right system data everytime you run the program.
	struct tm tm = *localtime(&t); // a structure to get the local date
	day = tm.tm_mday - 1; // get real day.
	year = tm.tm_year + 1900; // get real year.
	mon = tm.tm_mon + 1; // get real month.
}
void Another_Service()
{
	// get the other operation user wants to perform and start all over again
	cout << "\nSelect Service: " << endl << endl;
	for (int i = 1; i <= 6; ++i) // output array content by cell
	{
		cout << i << ". " << Serv[i - 1] << endl;
	}
	cout << endl;
	cin >> service;
	while (service > 6 || service < 1) // just confirming YOU'RE NOT SMART!!
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> service;
	}
	Services(); // function-ception.
}
void stars()
{
	cout << "********************" << endl;
}
void tags()
{
	cout << "====================" << endl;
}
