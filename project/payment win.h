// for windows only!!
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
// external declarations.
extern const int  rinse_price , steam_price, vacuum_price, wax_price; // prices
extern const int veichle_price[3]; // array for prices car, motor, truck.
extern const int w_price[3]; // Wash prizes based on type
extern const int scrub_price[3]; // scrub prizes based on type
extern int vehicle_type, service[2], price, w_type, scrub_type, total[3], x; // types and total.
extern char  Serv[6][20] ; // services array.
extern int *ptr_veh , *ptr_w, *ptr_scrub; // using pointers for some values.
// realized this thing is gonna be huge so moved to a separate header file.
void Payment()
{
	Sleep(1 * 1000);

	if (service[x] == 1)
	{

		if (*ptr_w == 1)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total[x]= w_price[0] + veichle_price[0]; // using total variable instead of live output
				cout << "The Total Price For Your Basic Car Wash Is: RM" << total[x]<< endl;// array should start from index [0]
				break;
			case 2 :
				total[x]= w_price[0] + veichle_price[1];
				cout << "The Total Price For Your Basic Bike Wash Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= w_price[0] + veichle_price[2];
				cout << "The Total Price For Your Basic Truck Wash Is: RM" << total[x]<< endl;
				break;
			}
		}
		if (*ptr_w == 2)
		{
			switch (*ptr_veh)
			{

			case 1 :
				total[x]= w_price[1] + veichle_price[0];
				cout << "The Total Price For Your Advanced Car Wash Is: RM" << total[x]<< endl;
				break;
			case 2 :
				total[x]= w_price[1] + veichle_price[1];
				cout << "The Total Price For Your Advanced Bike Wash Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= w_price[1] + veichle_price[2];
				cout << "The Total Price For Your Advanced Truck Wash Is: RM" << total[x]<< endl;
				break;
			}
		}
		if (*ptr_w == 3)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total[x]= w_price[2] + veichle_price[0];
				cout << "The Total Price For Your Premium Car Wash Is: RM" << total[x]<< endl;
				break;
			case 2 :
				total[x]= w_price[2] + veichle_price[1];
				cout << "The Total Price For Your Premium Bike Wash Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= w_price[2] + veichle_price[2];
				cout << "The Total Price For Your Premium Truck Wash Is: RM" << total[x]<< endl;
				break;
			}
		}
	}
	if (service[x] == 2)
	{

		if (*ptr_scrub == 1)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total[x]= scrub_price[0] + veichle_price[0];
				cout << "The Total Price For Your Basic Car Scrub Is: RM" << total[x]<< endl;
				break;
			case 2 :
				total[x]= scrub_price[0] + veichle_price[1];
				cout << "The Total Price For Your Basic Bike Scrub Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= scrub_price[0] + veichle_price[2];
				cout << "The Total Price For Your Basic Truck Scrub Is: RM" << total[x]<< endl;
				break;
			}
		}
		if (*ptr_scrub == 2)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total[x]= scrub_price[1] + veichle_price[0];
				cout << "The Total Price For Your Advanced Car Scrub Is: RM" << total[x]<< endl;
				break;
			case 2 :
				total[x]= scrub_price[1] + veichle_price[1];
				cout << "The Total Price For Your Advanced Bike Scrub Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= scrub_price[1] + veichle_price[2];
				cout << "The Total Price For Your Advanced Truck Scrub Is: RM" << total[x]<< endl;
				break;
			}
		}
		if (*ptr_scrub == 3)
		{
			switch (*ptr_veh)
			{
			case 1 :
				total[x]= scrub_price[2] + veichle_price[0];
				cout << "The Total Price For Your Premium Car scrub Is: RM" << total[x]<< endl;
				break;
			case 2 :
				total[x]= scrub_price[2] + veichle_price[1];
				cout << "The Total Price For Your Premium Bike scrub Is: RM" << total[x]<< endl;
				break;
			case 3 :
				total[x]= scrub_price[2] + veichle_price[2];
				cout << "The Total Price For Your Premium Truck scrub Is: RM" << total[x]<< endl;
				break;
			}
		}
	}
	if (service[x] == 3)
	{
		if (*ptr_veh == 1)
		{
			total[x]= rinse_price + veichle_price[0];
			cout << "The Total Price For Your  Car Rinse Is: RM" << total[x]<< endl;

		}
		else if (*ptr_veh == 2)
		{
			total[x]= rinse_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Rinse Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 3)
		{
			total[x]= rinse_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Rinse Is: RM" << total[x]<< endl;
		}
	}
	if (service[x] == 4)
	{
		if (*ptr_veh == 1)
		{
			total[x]= steam_price + veichle_price[0];
			cout << "The Total Price For Your  Car Steam Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 2)
		{
			total[x]= steam_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Steam Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 3)
		{
			total[x]= steam_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Steam Is: RM" << total[x]<< endl;
		}
	}
	if (service[x] == 5)
	{
		if (*ptr_veh == 1)
		{
			total[x]= vacuum_price + veichle_price[0];
			cout << "The Total Price For Your  Car Vacuum Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 2)
		{
			total[x]= vacuum_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Vacuum Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 3)
		{
			total[x]= vacuum_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Vacuum Is: RM" << total[x]<< endl;
		}
	}
	if (service[x] == 6)
	{
		if (*ptr_veh == 1)
		{
			total[x]= wax_price + veichle_price[0];
			cout << "The Total Price For Your  Car Wax Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 2)
		{
			total[x]= wax_price + veichle_price[1];
			cout << "The Total Price For Your  Bike Wax Is: RM" << total[x]<< endl;
		}
		else if (*ptr_veh == 3)
		{
			total[x]= wax_price + veichle_price[2];
			cout << "The Total Price For Your  Truck Wax Is: RM" << total[x]<< endl;
		}
	}
	Sleep(2 * 1000);
	cout << "\n" << "Please Pay at The Counter..." << "\n\n";
	Sleep(5 * 1000); // will assume that he made the payment in those 5 seconds
	cout << "Payment Received!" << endl << endl;
}
