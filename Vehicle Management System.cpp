#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

struct Vehicle

{
	string brand, model, type;
		

	int id = 0;
	int year = 0;

};

const int Maximum_Vehicles = 100;

Vehicle vehicles[Maximum_Vehicles];
int vehicleCount = 0;

void addVehicle()
{

	if (vehicleCount >= Maximum_Vehicles)
	{
		cout << "Error : Cannot add Vehicle, The Vehicle Record is full.\n";
		return;
	}




	int id, year;
	string brand, model, type;



	cout << "Enter Vehicle id : ";
	cin >> id;

	for (int i = 0; i < vehicleCount; i++) {
		if (vehicles[i].id == id) {
			cout << "Error: Vehicle with Id " << id << " already exists.\n";
			return;
		}
	}

	cin.ignore(1000,'\n');
	cout << "Enter Vehicle Brand : ";
	getline(cin, brand);


	cout << "Enter Vehicle Model : ";
	getline(cin, model);


	cout << "Enter Vehicle Type : ";
	getline(cin, type);

	cout << "Enter Year of Manufacture : ";
	cin >> year;

	vehicles[vehicleCount].id = id;
	vehicles[vehicleCount].brand = brand;
	vehicles[vehicleCount].model = model;
	vehicles[vehicleCount].year = year;
	vehicles[vehicleCount].type = type;
	vehicleCount++;

	cout << "Vehicle Details Added Successfully.\n";




}

void updateVehicle()
{
	int id;
	cout << "Enter Id of The Vehicle to Update : ";
	cin >> id;

	for (int i = 0; i < vehicleCount; i++)
	{

		if (vehicles[i].id == id)
		{
			cout << "Vehicle is Found.\n";

			string newBrand, newModel, newType;
			int newYear;

			cin.ignore(1000,'\n');
			cout << "Enter New Brand : ";
			getline(cin, newBrand);


			cout << "Enter New Model : ";
			getline(cin, newModel);


			cout << "Enter New Type : ";
			getline(cin, newType);

			cout << "Enter New Year of Manufacture : ";
			cin >> newYear;

			vehicles[i].brand = newBrand;
			vehicles[i].model = newModel;
			vehicles[i].year = newYear;
			vehicles[i].type = newType;


			cout << "Vehicle Details Updated Successfully.\n";
			return;


		}


	}


	cout << "Error : Vehicle with Id " << id << " Not Found." << endl;


}

void deleteVehicle()
{

	int id;

	cout << "Enter The Id of The vehicle to Delete : ";
	cin >> id;

	for (int i = 0; i < vehicleCount; i++)


	{
		if (vehicles[i].id == id)

		{
			cout << "Vehicle is Found.\n";

			int m;

			for (m = i; m < vehicleCount - 1; m++)

			{

				vehicles[m] = vehicles[m + 1];


			}

			vehicleCount--;

			cout << "Vehicle Details Deleted Successfully.\n";

			return;

		}




	}


	cout << "Error : Vehicle with Id " << id << " is not found.\n";


}




void viewVehicle()

{

	if (vehicleCount == 0)

	{

		cout << "There is no Vehicles to Display\n";
		return;

	}






	cout << "\n-------------Available Vehicles-----------\n";


	for (int i = 0; i < vehicleCount; i++)

	{


		cout << "Id : " << vehicles[i].id << endl;
		cout << "Brand : " << vehicles[i].brand << endl;
		cout << "Model : " << vehicles[i].model << endl;
		cout << "Year of Manufacture : " << vehicles[i].year << endl;
		cout << "Type : " << vehicles[i].type << endl;


	}


	cout << "End" << endl;


}

struct Sale

{

	string customerName, date;
	int saleId = 0;
	double amount = 0.0;
	double distance = 0.0;


};


const int maximumSales = 100;

Sale sales[maximumSales];
int salesCount = 0;


void addSale()
{

	if (salesCount == maximumSales)
	{

		cout << "Can not Add Sales, The Sales Record is full.\n";

		return;

	}



	string customerName, date;
	int saleId;
	double distance, charge_per_kilometer;






	cout << "Enter Sale Id : ";
	cin >> saleId;

	for (int i = 0; i <salesCount;i++){
		if (sales[i].saleId == saleId) {
			cout << "Error: Sale with Id " << saleId << " already exists.\n";
			return;
		}
	}

	cin.ignore(1000,'\n');
	cout << "Enter Customer Name : ";
	getline(cin, customerName);


	cout << "Enter Date : ";
	getline(cin, date);


	cout << "Enter Distance : ";
	cin >> distance;

	cout << "Enter Charge Per Kilometer : ";
	cin >> charge_per_kilometer;

	double amount = distance * charge_per_kilometer;

	sales[salesCount].saleId = saleId;
	sales[salesCount].customerName = customerName;
	sales[salesCount].date = date;
	sales[salesCount].amount = amount;
	sales[salesCount].distance = distance;
	salesCount++;

	cout << "Sales Details Added Successfully.\n";



}


void updateSale()
{

	int saleId;

	cout << "Enter Sale Id to update\n";
	cin >> saleId;

	for (int i = 0; i < salesCount; i++)
	{
		if (sales[i].saleId == saleId)
		{


			cout << "Sale is Found.\n";

			string new_customer_name, newDate;
			double newDistance, newAmount, new_charge_per_kilometer;

			cin.ignore(1000,'\n');
			cout << "Enter New Customer Name : ";
			getline(cin, new_customer_name);


			cout << "Enter New Date : ";
			getline(cin, newDate);


			cout << "Enter New Distance : ";
			cin >> newDistance;

			cout << "Enter New Charge Per Kilometer : ";
			cin >> new_charge_per_kilometer;

			newAmount = newDistance * new_charge_per_kilometer;

			sales[i].customerName = new_customer_name;
			sales[i].date = newDate;
			sales[i].distance = newDistance;
			sales[i].amount = newAmount;


			cout << "Sales Details Updated Successfully.\n";
			return;
		}
	}

	cout << "Error : Sale with Id " << saleId << " Not Found" << endl;


}


void deleteSale()
{

	int saleId;

	cout << "Enter The Id of The Sale : ";
	cin >> saleId;

	for (int i = 0; i < salesCount; i++)

	{


		if (sales[i].saleId == saleId)
		{

			cout << "Sale is Found.\n";


			int l;

			for (l = i; l < salesCount - 1; l++)
			{



				sales[l] = sales[l + 1];



			}

			salesCount--;

			cout << "Sales Details Deleted Successfully.\n";

			return;



		}


	}


	cout << "Error : Sale with Id " << saleId << " Not Found" << endl;


}


void viewSale()
{

	if (salesCount == 0)
	{

		cout << "There is no sales in the Sales Record to Display.";
		return;

	}



	cout << "\n---------Sales Details----------\n";

	for (int i = 0; i < salesCount; i++)

	{

		cout << "Id: " << sales[i].saleId << endl;
		cout << "Customer Name:  " << sales[i].customerName << endl;
		cout << "Date: " << sales[i].date << endl;
		cout << "Distance: " << sales[i].distance << endl;
		cout << "Amount: " << sales[i].amount << endl;


	}

	cout << "End" << endl;


}


void viewCompanyDetails()
{

	cout << "Name :" << endl;
	cout << "Business :" << endl;
	cout << "Location :" << endl;

}







void Login()
{

	string Username, Password;





	do {



		cout << "Enter Username : " << endl;
		getline(cin, Username);


		cout << "Enter Password : " << endl;
		getline(cin, Password);






		if (Username != "")
		{
			cout << "Entered Invalid Username\n";


		}

		if (Password != "")

		{

			cout << "Entered Invalid Password\n";
		}

	}

	while (Username != "" || Password != "");

}



void Logout()

{


	int choice2;

	do {

		cout << "1. Login" << endl;
		cout << "2. Exit" << endl;

		cout << "Enter Choice ( 1 or 2 ) : ";
		cin >> choice2;



		switch (choice2)
		{
		case 1:




			cin.ignore(1000, '\n');
			Login();

			break;

		case 2:


			break;

		}


	} while (choice2 != 1 && choice2 != 2);


	}



void manageVehicle()
{


	int choice;


	do {



		cout << "1. Add Vehicle Details\n";
		cout << "2. Update Vehicle Details\n";
		cout << "3. Delete Vehicle Details\n";
		cout << "4. View Vehicle Details\n";
		cout << "5. Return to Main Menu\n";
		cout << "" << endl;// For Space.
		cout << "Enter Choice ( 1 - 5 ) : ";
		cin >> choice;

		switch (choice)
		{

		case 1:


			addVehicle();
			break;



		case 2:


			updateVehicle();
			break;



		case 3:


			deleteVehicle();
			break;





		case 4:

			viewVehicle();
			break;



		case 5:


		
			break;




		default:



			cout << "Invalid Choice Entered";
			break;





		}



	}

	while (choice != 5);

}


void manageSale()

{


	int choice;




	do
	{



		cout << "1. Add Sales Details\n";
		cout << "2. Update Sales Details\n";
		cout << "3. Delete Sales Details\n";
		cout << "4. View Sales Details\n";
		cout << "5. Return to Main Menu\n";
		cout << "" << endl;// For Space.
		cout << "Enter Choice ( 1 - 5 ) : ";
		cin >> choice;
		
		switch (choice)
		{

		case 1:


			addSale();
			break;



		case 2:


			updateSale();
			break;



		case 3:


			deleteSale();
			break;





		case 4:


			viewSale();
			break;

		case 5:


			
			break;



		default:



			cout << "Invalid Choice Entered";
			break;


		}


	}

	while (choice != 5);

}

int main()
{



	Login();


	int choice;

	do {

		cout << "\n------------Main Menu---------------\n";
		cout << "" << endl;// For Space.
		cout << "1. View Company Details" << endl;
		cout << "2. Manage Vehicle Details " << endl;
		cout << "3. Manage Sales" << endl;
		cout << "4. Logout" << endl;
		cout << "5. Exit" << endl;




		cout << "Enter Choice ( 1 - 5 ) : ";
		cin >> choice;



		switch (choice)

		{
		case 1:viewCompanyDetails();

			break;


		case 2:



			manageVehicle();

			break;


		case 3:



			manageSale();


			break;

		case 4:


			Logout();
			break;


		case 5:

			break;


		default:


			cout << "Invalid Choice Entered" << endl;

			break;


		}



	} while (choice != 5);


	
}









