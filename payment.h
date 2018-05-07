#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
using namespace std;
// global declarations in a header file and yes it does work.
const int  rinse_price = 10, steam_price = 15, vacuum_price = 10, wax_price = 5;
const int veichle_price[3] = {20, 15, 40}; // array for prices car, motor, truck.
const int w_price[3] = {15, 20, 30}; // Wash prizes based on type
const int scrub_price[3] = {10, 20, 40}; // scrub prizes based on type
int vehicle_type, service, price, w_type, scrub_type, total, day, mon, year, serv_id, day_nxt, year_nxt, mon_nxt;
char start_yn[100], Serv[6][20], as_yn[5], week[7][10]  ; // array to output services
// realized this thing is gonna be huge so moved to a separate header file.
void Payment()
{
	sleep(1);
	if (service == 1)
	{

		if (w_type == 1)
		{
			switch (vehicle_type)
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
		if (w_type == 2)
		{
			switch (vehicle_type)
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
		if (w_type == 3)
		{
			switch (vehicle_type)
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
	if (service == 2)
	{

		if (scrub_type == 1)
		{
			switch (vehicle_type)
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
		if (scrub_type == 2)
		{
			switch (vehicle_type)
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
		if (scrub_type == 3)
		{
			switch (vehicle_type)
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
	if (service == 3)
	{
		if (vehicle_type == 1)
		{
			total = rinse_price + veichle_price[0];
			cout << "The Total Price For Your  Car Rinse Is: RM" << total << endl;

		}
		else if (vehicle_type == 2)
		{
			total = rinse_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Rinse Is: RM" << total << endl;
		}
		else if (vehicle_type == 3)
		{
			total = rinse_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Rinse Is: RM" << total << endl;
		}
	}
	if (service == 4)
	{
		if (vehicle_type == 1)
		{
			total = steam_price + veichle_price[0];
			cout << "The Total Price For Your  Car Steam Is: RM" << total << endl;
		}
		else if (vehicle_type == 2)
		{
			total = steam_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Steam Is: RM" << total << endl;
		}
		else if (vehicle_type == 3)
		{
			total = steam_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Steam Is: RM" << total << endl;
		}
	}
	if (service == 5)
	{
		if (vehicle_type == 1)
		{
			total = vacuum_price + veichle_price[0];
			cout << "The Total Price For Your  Car Vacuum Is: RM" << total << endl;
		}
		else if (vehicle_type == 2)
		{
			total = vacuum_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Vacuum Is: RM" << total << endl;
		}
		else if (vehicle_type == 3)
		{
			total = vacuum_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Vacuum Is: RM" << total << endl;
			total = vacuum_price + veichle_price[2];
		}
	}
	if (service == 6)
	{
		if (vehicle_type == 1)
		{
			total = wax_price + veichle_price[0];
			cout << "The Total Price For Your  Car Wax Is: RM" << total << endl;
		}
		else if (vehicle_type == 2)
		{
			total = wax_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Wax Is: RM" << total << endl;
		}
		else if (vehicle_type == 3)
		{
			total = wax_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Wax Is: RM" << total << endl;
		}
	}
	sleep(2);
	cout << "\n\n" << "Please Pay at The Counter..." << "\n\n";
	sleep(5); // will assume that he made the payment in those 5 seconds
	cout << "Payment Received!" << endl;
	// the goodbye part should be after receipt
}
