#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void catalog()
{
	string  brand, adidasSho;
	cout << " \nEnter brand of shoes (Adidas, Nike, Asics, NewBalance, Puma): ";
	getline (cin,brand);
	if (brand == "Adidas" || brand == "adidas" || brand == "ADIDAS")
	{
		cout << endl;
		cout << setfill ('-') << setw (100) << "-" << endl;
		cout << "What adidas's shoes you want to buy?" << endl;
		cout << " \nEnter adidas's shoes (SAMBA, SPEZIAL, SUPERSTAR, CAMPUS, GAZELLE): ";
		getline (cin,adidasSho);
		
		if (adidasSho == "samba" || adidasSho == "SAMBA" || adidasSho == "Samba")
		{
			cout << endl << "PREVIEW ADIDAS SAMBA" << endl;
			cout << left << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "AS1" << setw (20) << "BLACK AND WHITE" << setw (30) << "8" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "AS2" << setw (20) << "BLUE AND WHITE" << setw (30) << "9" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "AS3" << setw (20) << "BROWN" << setw (30) << "7" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "AS4" << setw (20) << "GREEN" << setw (30) << "9" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "AS5" << setw (20) << "MAROON AND BLACK" << setw (30) << "10" << setw (40) << "179.99" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "speazial")
		{
			cout << endl << "PREVIEW ADIDAS SPEAZIAL" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "NO." << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "1." << setw (20) << "BLUE AND MAROON" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "2." << setw (20) << "LIGHT BLUE" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "3." << setw (20) << "YELLOW" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "4." << setw (20) << "GREEN" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "5." << setw (20) << "WHITE AND CREAM" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "superstar")
		{
			cout << endl << "PREVIEW ADIDAS SUPERSTAR" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "NO." << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "1." << setw (20) << "BLACK" << setw (30) << "5-10" << setw (40) << "354" << endl;
			cout << setfill (' ') << setw (10) << "2." << setw (20) << "WHITE" << setw (30) << "5-10" << setw (40) << "354" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "campus")
		{
			cout << endl << "PREVIEW ADIDAS CAMPUS" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "NO." << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "1." << setw (20) << "BLACK" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill (' ') << setw (10) << "2." << setw (20) << "WHITE" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill (' ') << setw (10) << "3." << setw (20) << "DARK BLUE" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "gazalle")
		{
			cout << endl << "PREVIEW ADIDAS GAZELLE" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "NO." << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "1." << setw (20) << "BLACK AND WHITE" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "2." << setw (20) << "BLUE AND WHITE" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "3." << setw (20) << "BROWN" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "4." << setw (20) << "GREEN" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "5." << setw (20) << "MAROON AND BLACK" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
	}
}

int main() 
{
	string name, pass1, address, contact;
	cout << setw(50) << setfill('=') << "=" << "Welcome to Harith's shop." << setw(50) << "=" << endl << endl;
	cout << setw(50) << setfill(' ') << " " << "**Profile Creation**" << endl;
	cout << setw(50) << " " << "--------------------" << endl;
	cout << " " << "NAME : ";
	getline(cin,name);
	cout << " " << "PASSWORD : ";
	getline(cin,pass1);
	cout << " " << "ADDRESS : ";
	getline(cin,address);
	cout << " " << "CONTACT : ";
	getline(cin,contact);
	//greeting
	cout << setfill ('-') << setw (100) << "-" << endl;
	cout << "\t\t\t\tWELCOME TO OUR CATALOG BRANDED SHOES!" << endl;
	cout << setfill ('-') << setw (100) << "-";

	//varieable declaration
	string  brand, adidasSho, code;
	int AS1 = 0, AS2 = 0, AS3 = 0, AS4 = 0, AS5 = 0;
	char decision;
	
	cout << endl;
	cout << "What brand are you looking for?";
	cout << endl;
	catalog();
	cout << "Enter code (S if want to continue to next catalog) : ";
	getline(cin,code);
	if (code == "AS1")
	{
		cout << "Add to cart? (y/n) :";
		cin >> decision;
		switch (decision)
		{
			case 'y' : 
			case 'Y' : cout << "Added to cart ";
						AS1++;
							break;

			case 'n' :
			case 'N' :cout << "Cancelled ";
							break;
		}
		cout << AS1;
	}
	else if (code == "AS2")
	{
		cout << "Add to cart? (y/n) :";
		cin >> decision;
		switch (decision)
		{
			case 'y' : 
			case 'Y' : cout << "Added to cart ";
						AS2++;
							break;

			case 'n' :
			case 'N' :cout << "Cancelled ";
						break;
		}
		cout << AS2;
	}
	else if (code == "AS3")
	{
		cout << "Add to cart? (y/n) :";
		cin >> decision;
		switch (decision)
		{
			case 'y' : 
			case 'Y' : cout << "Added to cart ";
						AS3++;
							break;

			case 'n' :
			case 'N' :cout << "Cancelled ";
							break;
		}
		cout << AS3;
	}
	else if (code == "AS4")
	{
		cout << "Add to cart? (y/n) :";
		cin >> decision;
		switch (decision)
		{
			case 'y' : 
			case 'Y' : cout << "Added to cart ";
						AS4++;
								break;

			case 'n' :
			case 'N' :cout << "Cancelled ";
						break;
		}
		cout << AS4;
	}
	else if (code == "AS5")
	{
		cout << "Add to cart? (y/n) :";
		cin >> decision;
		switch (decision)
		{
			case 'y' : 
			case 'Y' : cout << "Added to cart ";
						AS5++;
								break;

			case 'n' :
			case 'N' :cout << "Cancelled ";
							break;
		}
		cout << AS5;
	}
	else if (code == "s")
	{
		brand = "0";
		adidasSho = "0";
		cout << "Proceed to another catalog (y/n): ";
		cin >> decision;
		if (decision == 'y')
		{
			catalog();
		}
//		else
//		{
//			
//		}
	}
	return 0;
}
