#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void catalog()
{
	string  brand, adidasSho;
	cout << " \nEnter brand of shoes (Adidas, Nike, Asics, NewBalance, Puma): ";
	getline (cin,brand);
	cin.ignore();

	if (brand == "Adidas" || brand == "adidas" || brand == "ADIDAS")
	{
		cout << endl;
		cout << setfill ('-') << setw (100) << "-" << endl;
		cout << "What adidas's shoes you want to buy?" << endl;
		cout << " \nEnter adidas's shoes (SAMBA, SPEZIAL, SUPERSTAR, CAMPUS, GAZELLE): ";
		getline (cin,adidasSho);
		cin.ignore();
		if (adidasSho == "samba" || adidasSho == "SAMBA" || adidasSho == "Samba")
		{
			cin.ignore();
			cout << endl << "PREVIEW ADIDAS SAMBA" << endl;
			cout << left << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "ASB1" << setw (20) << "BLACK AND WHITE" << setw (30) << "8" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "ASB2" << setw (20) << "BLUE AND WHITE" << setw (30) << "9" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "ASB3" << setw (20) << "BROWN" << setw (30) << "7" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "ASB4" << setw (20) << "GREEN" << setw (30) << "9" << setw (40) << "179.99" << endl;
			cout << setfill (' ') << setw (10) << "ASB5" << setw (20) << "MAROON AND BLACK" << setw (30) << "10" << setw (40) << "179.99" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "speazial")
		{
			cout << endl << "PREVIEW ADIDAS SPEAZIAL" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "ASZ1" << setw (20) << "BLUE AND MAROON" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "ASZ2" << setw (20) << "LIGHT BLUE" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "ASZ3" << setw (20) << "YELLOW" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "ASZ4" << setw (20) << "GREEN" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill (' ') << setw (10) << "ASZ5" << setw (20) << "WHITE AND CREAM" << setw (30) << "5-10" << setw (40) << "349" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "superstar")
		{
			cout << endl << "PREVIEW ADIDAS SUPERSTAR" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "ASS1" << setw (20) << "BLACK" << setw (30) << "5-10" << setw (40) << "354" << endl;
			cout << setfill (' ') << setw (10) << "ASS2" << setw (20) << "WHITE" << setw (30) << "5-10" << setw (40) << "354" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}
		else if (adidasSho == "campus")
		{
			cout << endl << "PREVIEW ADIDAS CAMPUS" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "ACP1" << setw (20) << "BLACK" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill (' ') << setw (10) << "ACP2" << setw (20) << "WHITE" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill (' ') << setw (10) << "ACP3" << setw (20) << "DARK BLUE" << setw (30) << "5-10" << setw (40) << "394" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}	
		else if (adidasSho == "gazalle")
		{
			cout << endl << "PREVIEW ADIDAS GAZELLE" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "CODE" << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "AGZ1" << setw (20) << "BLACK AND WHITE" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "AGZ2" << setw (20) << "BLUE AND WHITE" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "AGZ3" << setw (20) << "BROWN" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "AGZ4" << setw (20) << "GREEN" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill (' ') << setw (10) << "AGZ5" << setw (20) << "MAROON AND BLACK" << setw (30) << "5-10" << setw (40) << "399" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
		}	
	}
//	else if (brand == "nike" || brand == "NIKE" || brand == "Nike")
//	{
//		
//	}
//	else if (brand)
}

void decision()
{
	int ASB[5], i;
	int AmountASB1, AmountASB2, AmountASB3, AmountASB4, AmountASB5;
	char decision;
	string code;
	
	cout << "Enter code (S to continue to next catalog) : ";
	getline (cin, code);
	
	if (code == "ASB1")
	{
		cout << "How many pieces you want?";
		cin >> AmountASB1;
		
		for (i = 0; i < 5; i++)
		{
			if (i != 0)
			{
				continue;
			}
			ASB[i] = AmountASB1;
		}
		
	}
	else if (code == "ASB2")
	{
		cout << "How many pieces you want?";
		cin >> AmountASB2;
		
		for (i = 0; i < 5; i++)
		{
			if (i != 1)
			{
				continue;
			}
			ASB[i] = AmountASB2;
		}
		
	}
	else if (code == "ASB3")
	{
		cout << "How many pieces you want?";
		cin >> AmountASB3;
		
		for (i = 0; i < 5; i++)
		{
			if (i != 2)
			{
				continue;
			}
			ASB[i] = AmountASB3;
		}
		
	}
	else if (code == "ASB4")
	{
		cout << "How many pieces you want?";
		cin >> AmountASB4;
		
		for (i = 0; i < 5; i++)
		{
			if (i != 3)
			{
				continue;
			}
			ASB[i] = AmountASB4;
		}
		
	}
	else if (code == "ASB5")
	{
		cout << "How many pieces you want?";
		cin >> AmountASB5;
		
		for (i = 0; i < 5; i++)
		{
			if (i != 4)
			{
				continue;
			}
			ASB[i] = AmountASB5;
		}
		
	}
	else
	{
		cout << "error";
	}
	
}

int main() 
{
	string user, pass;
	int shoeAmount;
	
	cout << setw(50) << setfill('=') << "=" << "Welcome to Harith's shop." << setw(50) << "=" << endl << endl;
	cout << setw(50) << setfill(' ') << " " << "**Profile Creation**" << endl;
	cout << setw(50) << " " << "--------------------" << endl;
	cout << setw(50) << " " << "Username : ";
	getline(cin,user);
	cout << setw(50) << " " << "Password : ";
	getline(cin,pass);
	//greeting
	cout << setfill ('-') << setw (100) << "-" << endl;
	cout << "\t\t\t\tWELCOME TO OUR CATALOG BRANDED SHOES!" << endl;
	cout << setfill ('-') << setw (100) << "-";

	//varieable declaration
	string  brand, adidasSho, code;
	
	//product display
	cout << endl;
	cout << "How many shoe you want to buy? : ";
	cin >> shoeAmount;
	cout << "What brand are you looking for?" << endl;
	catalog();
//		else
//		{
//			
//		}
	return 0;
}
