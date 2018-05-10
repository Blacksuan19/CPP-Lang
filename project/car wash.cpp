/* group members:
	- Abubakar Yagoub Ibrahim     1625897
 	- Hanan Allil 			 		   1617888
	- Ichsanudin Fukky Winasis     G1710308
 */
// time to start commenting everything for no reason(because why not)
// too many sleep() to make it more realistic
// between both if-else and switch for diversity
#include <iostream> // standard library
#include <iomanip> // output manipulation library
#include <string.h> // C library (for strcpy)
#include "payment.h" // external header file
#include <ctime> //time library
#include <stdlib.h> //standard library.
using namespace std;
char name[] = "AHK"; // combination of team names initials.
void tags(); // decoration, separating between different parts of the program
void Services(); // services and their options etc.
void Receipt(); // print Receipt after service is finished
void Meta(); // generate a service number and get today's date and stuff.
void Another_Service(); // function to let user choose another service after finishing first service
int main()
{
	cout << "			--------------------------------------------------\n\n";
	cout << "				Welcome To " << name <<  " Car Washing Service\n" << endl; // need a name for this
	cout << "			--------------------------------------------------\n\n";
	sleep(2);
	cout << "\nPlease Select Vehicle Type: " << endl << endl // prompt user to select vehicle type.
	     << "1. Car" << endl
	     << "2. Motor Bike" << endl
	     << "3. Truck " << endl <<  endl;
	cin >> *ptr_veh;// should be vehicle type (check)
	while (*ptr_veh > 3 || *ptr_veh < 1) // just in case you think you're smart.
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> *ptr_veh;
	}
	tags();
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
	cin >> *ptr_serv;
	while (*ptr_serv > 6 || *ptr_serv < 1) // just in case you think you're smart
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> *ptr_serv;
	}
	Services();//function call
	return 0;
}

void Services() // services function.
{
	tags();
	sleep(2);
	if (*ptr_serv == 1)
	{
		/* the main difference between the 3 types is tools used to perform the operation
		premium type includes all things from Advanced and Basic with some extras as well */
		cout << "\nSelect The Type Of Wash You Want: \n" << endl
		     << setw(20) << left << "1. Basic Wash" << setw(3) << left << "RM" << w_price[0] << endl
		     << setw(20) << left << "2. Advanced Wash" << setw(3) << left << "RM" << w_price[1] << endl
		     << setw(20) << left << "3. Premium Wash" << setw(3) << left << "RM" << w_price[2] << endl << endl;
		cin >> *ptr_w;
		while (*ptr_w > 3 || *ptr_w < 1) // you're not smart
		{
			sleep(1);
			cout << "Please Select A Valid Option: ";
			cin >> *ptr_w;
		}
		sleep(1);
		switch (*ptr_w) // give visual output of selected service before processing.
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
	if (*ptr_serv == 2)
	{
		/* the main difference between the 3 types is tools used to perform the operation
		premium type includes all things from Advanced and Basic with some extras as well */
		cout << "\nPlease Select The  Scrub Type You Want: \n" << endl
		     << setw(20) << left << "1. Basic Scrub" << setw(3) << left << "RM" << scrub_price[0] << endl
		     << setw(20) << left << "2. Advanced Scrub" << setw(3) << left << "RM" << scrub_price[1] << endl
		     << setw(20) << left << "3. Premium Scrub" << setw(3) << left << "RM" << scrub_price[2] << endl << endl;
		cin >> *ptr_scrub;
		while (*ptr_scrub > 3 || *ptr_scrub < 1) // you should be aware of that by now
		{
			sleep(1);
			cout << "Please Select A Valid Option: ";
			cin >> *ptr_scrub;
		}
		sleep(1);
		switch (*ptr_scrub) // give visual output of selected service before processing.
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
	if (*ptr_serv == 3)
	{
		cout << "\nRinse Service Selected\n" << endl; // give visual output of selected service before processing.
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (*ptr_serv == 4)
	{
		cout << "\nSteam Service Selected...\n" << endl; // give visual output of selected service before processing.
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (*ptr_serv == 5)
	{
		cout << "\nVacuum Service Selected...\n" << endl; // give visual output of selected service before processing.
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	if (*ptr_serv == 6)
	{
		cout << "\nWax Service Selected\n" << endl; // give visual output of selected service before processing.
		sleep(2);
		cout << "Proceeding To Payment..." << endl << endl;
	}
	tags();
	cout << endl; // formatting game on point.
	Payment(); // go to payment function in header file
	Receipt(); // go to receipt after finishing payment part
}

void Receipt()
{
	tags();
	cout << endl << "Starting Your Service..." << endl;
	sleep(2);
	cout << "\npress Any Key To Start: ";
	cin >> start_yn; // input anything here just to make sure the user wants the service to start now
	sleep(2);
	cout << endl << "Service ongoing..." << endl;
	sleep(10); // assuming in these 10 seconds  the operation is completed
	cout << "\nOperation Completed!!" << endl << endl; // skip 2 lines
	sleep(2);
	tags();
	cout << endl <<  "Here Is Your Receipt:" << endl << endl;
	sleep(2);
	tags();
	Meta(); //call function to generate service id, time, and date
	cout <<  endl << setw(15) << left <<  "Date " << ": " << week[s + 1] << " " << day + 1 << "th, " << mon_char[mon - 1] << " " << year << endl;
	sleep(1);
	cout << endl << setw(15) << left <<  "Service ID" << ": " << serv_id << endl;
	sleep(1);
	cout << endl << setw(15) << left <<  "Vehicle Type" << ": ";
	switch (*ptr_veh)
	{
	case 1 : cout << "Car"; break;
	case 2 : cout << "Motor Bike"; break;
	case 3 : cout << "truck"; break;
	}
	sleep(1);
	cout << endl <<  endl <<  setw(15) << left <<  "Service Type" << ": ";
	switch (*ptr_serv)
	{
	case 1 :
		if (*ptr_w == 1)
		{
			cout << "Basic Wash" << endl; break;
		}
		else if (*ptr_w == 2)
		{
			cout << "Advanced Wash" << endl; break;
		}
		else if (*ptr_w == 3)
		{
			cout << "Premium Wash" << endl; break;
		}
	case 2 :
		if (*ptr_scrub == 1)
		{
			cout << "Basic Scrub" << endl; break;
		}
		else if (*ptr_scrub == 2)
		{
			cout << "Advanced Scrub" << endl; break;
		}
		else if (*ptr_scrub == 3)
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
	cout << endl;
	// for some reason strcmp can't compare pointers so used the variable itself
	while (strcmp(as_yn, "yes") != 0 && strcmp(as_yn, "no") != 0 && strcmp(as_yn, "Yes") != 0 && strcmp(as_yn, "No") != 0) // again testing your IQ level.
	{
		sleep(1);
		cout << endl <<  "Please Type Yes Or No: ";
		cin >> as_yn;
	}
	sleep(2);
	// new option to check if user wants to perform another operation or not
	if (strcmp(as_yn, "yes" ) == 0 || strcmp(as_yn, "Yes") == 0) // let both capital and small initials be true
	{
		Another_Service(); // function call.

	}
	else if (strcmp(as_yn, "no") == 0 || strcmp(as_yn, "No") == 0) // let both capital and small initials be true
	{
		sleep(1);
		tags();
		cout << "\nthank you for using our services" << endl;
		sleep(1);
		cout << "\nPlease come back again!!" << endl << endl; // or maybe not.

	}
}

void Meta() // good stuff right here.
{
	// copy week days to week array
	strcpy(week[0], "Sun") ;
	strcpy(week[1], "Mon") ;
	strcpy(week[2], "Tue") ;
	strcpy(week[3], "Wed") ;
	strcpy(week[4], "Thu") ;
	strcpy(week[5], "Fri") ;
	strcpy(week[6], "Sat") ;
	srand(time(NULL)); // set run time to null so you get a different number each time you run the program.
	serv_id = 1 + rand() % (1 - 1000 + 1); // generate a number between 1 and 1000.
	time_t t = time(NULL); // set the time to null so it will read the right system data everytime you run the program.
	struct tm tm = *localtime(&t); // a structure to get the local date
	day = tm.tm_mday - 1; // get real day.
	year = tm.tm_year + 1900; // get real year.
	mon = tm.tm_mon + 1; // get real month.
	// transform day from int to real day name
	for (int i = 0 ; i < mon - 1 ; i++)
	{
		s = s + month[i] ;
	}
	s = s + (day + year + (year / 4) - 2) ; // some random algorithm that just works (don't ask how please)
	s = s % 7 ;
	// change month from int to real month
	strcpy(mon_char[0], "January");
	strcpy(mon_char[1], "February");
	strcpy(mon_char[2], "March");
	strcpy(mon_char[3], "April");
	strcpy(mon_char[4], "May");
	strcpy(mon_char[5], "June");
	strcpy(mon_char[6], "July");
	strcpy(mon_char[7], "August");
	strcpy(mon_char[8], "September");
	strcpy(mon_char[9], "October");
	strcpy(mon_char[10], "November");
	strcpy(mon_char[11], "December");
}

void Another_Service() // allow user To select another operation.
{
	// wont ask for vehicle type again because its known now.
	int i = 1; // for do-while
	tags();
	// get the other operation user wants to perform and start all over again
	cout << "\nSelect Service: " << endl << endl;
	// using do-while instead of for loop for diversity.
	do {
		cout << i << ". " << Serv[i - 1] << endl;
		++i;
	} while (i <=  6);
	cout << endl;
	cin >> *ptr_serv;
	while (*ptr_serv > 6 || *ptr_serv < 1) // just confirming YOU'RE NOT SMART!!
	{
		sleep(1);
		cout << "Please Select A Valid Option: ";
		cin >> *ptr_serv;
	}
	Services(); // function-inception.
}

void tags() // decoration
{
	cout << "==============================" << endl;
}