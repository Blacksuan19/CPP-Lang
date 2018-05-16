#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;
// external declarations. 
extern const int  rinse_price , steam_price, vacuum_price, wax_price; // prices
extern const int veichle_price[3]; // array for prices car, motor, truck.
extern const int w_price[3]; // Wash prizes based on type
extern const int scrub_price[3]; // scrub prizes based on type
extern int vehicle_type, service, price, w_type, scrub_type, total; // types and total.
extern char  Serv[6][20] ; // services array.
extern int *ptr_veh , *ptr_serv, *ptr_w, *ptr_scrub; // using pointers for some values.
// realized this thing is gonna be huge so moved to a separate header file.
void Payment()
{
	sleep(1);

	if (*ptr_serv == 1)
	{

		if (*ptr_w == 1)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total = w_price[0] + veichle_price[0]; // using total variable instead of live output
				cout << "The Total Price For Your Basic Car Wash Is: RM" << total << endl;// array should start from index [0]
				break;
			case 2 :
				total = w_price[0] + veichle_price[1];
				cout << "The Total Price For Your Basic Bike Wash Is: RM" << total << endl;
				break;
			case 3 :
				total = w_price[0] + veichle_price[2];
				cout << "The Total Price For Your Basic Truck Wash Is: RM" << total << endl;
				break;
			}
		}
		if (*ptr_w == 2)
		{
			switch (*ptr_veh)
			{

			case 1 :
				total = w_price[1] + veichle_price[0];
				cout << "The Total Price For Your Advanced Car Wash Is: RM" << total << endl;
				break;
			case 2 :
				total = w_price[1] + veichle_price[1];
				cout << "The Total Price For Your Advanced Bike Wash Is: RM" << total << endl;
				break;
			case 3 :
				total = w_price[1] + veichle_price[2];
				cout << "The Total Price For Your Advanced Truck Wash Is: RM" << total << endl;
				break;
			}
		}
		if (*ptr_w == 3)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total = w_price[2] + veichle_price[0];
				cout << "The Total Price For Your Premium Car Wash Is: RM" << total << endl;
				break;
			case 2 :
				total = w_price[2] + veichle_price[1];
				cout << "The Total Price For Your Premium Bike Wash Is: RM" << total << endl;
				break;
			case 3 :
				total = w_price[2] + veichle_price[2];
				cout << "The Total Price For Your Premium Truck Wash Is: RM" << total << endl;
				break;
			}
		}
	}
	if (*ptr_serv == 2)
	{

		if (*ptr_scrub == 1)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total = scrub_price[0] + veichle_price[0];
				cout << "The Total Price For Your Basic Car Scrub Is: RM" << total << endl;
				break;
			case 2 :
				total = scrub_price[0] + veichle_price[1];
				cout << "The Total Price For Your Basic Bike Scrub Is: RM" << total << endl;
				break;
			case 3 :
				total = scrub_price[0] + veichle_price[2];
				cout << "The Total Price For Your Basic Truck Scrub Is: RM" << total << endl;
				break;
			}
		}
		if (*ptr_scrub == 2)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total = scrub_price[1] + veichle_price[0];
				cout << "The Total Price For Your Advanced Car Scrub Is: RM" << total << endl;
				break;
			case 2 :
				total = scrub_price[1] + veichle_price[1];
				cout << "The Total Price For Your Advanced Bike Scrub Is: RM" << total << endl;
				break;
			case 3 :
				total = scrub_price[1] + veichle_price[2];
				cout << "The Total Price For Your Advanced Truck Scrub Is: RM" << total << endl;
				break;
			}
		}
		if (*ptr_scrub == 3)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total = scrub_price[2] + veichle_price[0];
				cout << "The Total Price For Your Premium Car scrub Is: RM" << total << endl;
				break;
			case 2 :
				total = scrub_price[2] + veichle_price[1];
				cout << "The Total Price For Your Premium Bike scrub Is: RM" << total << endl;
				break;
			case 3 :
				total = scrub_price[2] + veichle_price[2];
				cout << "The Total Price For Your Premium Truck scrub Is: RM" << total << endl;
				break;
			}
		}
	}
	if (*ptr_serv == 3)
	{
		if (*ptr_veh == 1)
		{
			total = rinse_price + veichle_price[0];
			cout << "The Total Price For Your  Car Rinse Is: RM" << total << endl;

		}
		else if (*ptr_veh == 2)
		{
			total = rinse_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Rinse Is: RM" << total << endl;
		}
		else if (*ptr_veh == 3)
		{
			total = rinse_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Rinse Is: RM" << total << endl;
		}
	}
	if (*ptr_serv == 4)
	{
		if (*ptr_veh == 1)
		{
			total = steam_price + veichle_price[0];
			cout << "The Total Price For Your  Car Steam Is: RM" << total << endl;
		}
		else if (*ptr_veh == 2)
		{
			total = steam_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Steam Is: RM" << total << endl;
		}
		else if (*ptr_veh == 3)
		{
			total = steam_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Steam Is: RM" << total << endl;
		}
	}
	if (*ptr_serv == 5)
	{
		if (*ptr_veh == 1)
		{
			total = vacuum_price + veichle_price[0];
			cout << "The Total Price For Your  Car Vacuum Is: RM" << total << endl;
		}
		else if (*ptr_veh == 2)
		{
			total = vacuum_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Vacuum Is: RM" << total << endl;
		}
		else if (*ptr_veh == 3)
		{
			total = vacuum_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Vacuum Is: RM" << total << endl;
			total = vacuum_price + veichle_price[2];
		}
	}
	if (*ptr_serv == 6)
	{
		if (*ptr_veh == 1)
		{
			total = wax_price + veichle_price[0];
			cout << "The Total Price For Your  Car Wax Is: RM" << total << endl;
		}
		else if (*ptr_veh == 2)
		{
			total = wax_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Wax Is: RM" << total << endl;
		}
		else if (*ptr_veh == 3)
		{
			total = wax_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Wax Is: RM" << total << endl;
		}
	}
	sleep(2);
	cout << "\n" << "Please Pay at The Counter..." << "\n\n";
	sleep(5); // will assume that he made the payment in those 5 seconds
	cout << "Payment Received!" << endl << endl;
}
