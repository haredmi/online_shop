#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void catalog()
{
	string  brand, adidasSho;
	
	//product display
	cout << endl;
	cout << "What brand are you looking for?" << endl;
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
	int ASB[5] = {0}, i, stockASB[5] = {1,1,1,1,1}, temporary;
	char decision;
	string code;
	
	cout << "Enter code (\'S\' if you did not interested) : ";
	getline (cin, code);
	
	while (code != "ASB1" && code != "ASB2" && code != "ASB3" && code != "ASB4" && code != "ASB5" && code != "s" && code != "S")
	{
		cout << "No such code exist! Please re-enter : ";
		getline (cin, code);
	}
	
	if (code == "ASB1")
	{
		for (i = 0; i < 5; i++)
		{
			if (i != 0)
			{
				continue;
			}
			
			if (stockASB[i] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[i] = temporary;
				ASB[i] = stockASB[i];
				stockASB[i] = temporary;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
			}
			
		}
	
	}
	else if (code == "ASB2")
	{	
		for (i = 0; i < 5; i++)
		{
			if (i != 1)
			{
				continue;
			}
			
			if (stockASB[i] == 1)
			{
				ASB[i] = temporary;
				ASB[i] = stockASB[i];
				stockASB[i] = temporary;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
			}
			else
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
		}
		
	}
	else if (code == "ASB3")
	{
		
		for (i = 0; i < 5; i++)
		{
			if (i != 2)
			{
				continue;
			}
			
			if (stockASB[i] == 1)
			{
				ASB[i] = temporary;
				ASB[i] = stockASB[i];
				stockASB[i] = temporary;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
			}
			else
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
		}
		
	}
	else if (code == "ASB4")
	{
	
		for (i = 0; i < 5; i++)
		{
			if (i != 3)
			{
				continue;
			}
			
			if (stockASB[i] == 1)
			{
				ASB[i] = temporary;
				ASB[i] = stockASB[i];
				stockASB[i] = temporary;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
			}
			else
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
		}
		
	}
	else if (code == "ASB5")
	{
			
		for (i = 0; i < 5; i++)
		{
			if (i != 4)
			{
				continue;
			}
			
			if (stockASB[i] == 1)
			{
				ASB[i] = temporary;
				ASB[i] = stockASB[i];
				stockASB[i] = temporary;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
			}
			else
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
		}
		
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << "ordered [" << i+1 << "] : " << ASB[i] << endl;
		cout << "Stock [" << i+1 << "] : " << stockASB[i] << endl << endl;
	}
	
}

int main() 
{
	string user, pass;
	char stop;
	int i;
	
	cout << setw(50) << setfill('=') << "=" << "Welcome to Harith's shop." << setw(50) << "=" << endl << endl;
	cout << setw(50) << setfill(' ') << " " << "**Profile Creation**" << endl;
	cout << setw(50) << " " << "--------------------" << endl;
	cout << setw(50) << " " << "Username : ";
	getline(cin,user);
	cout << setw(50) << " " << "Password : ";
	getline(cin,pass);
	//greeting
	cout << setfill ('-') << setw (100) << "-" << endl;
	cout << "\t\t\t\tWELCOME " << user << " TO OUR CATALOG BRANDED SHOES!" << endl;
	cout << setfill ('-') << setw (100) << "-";
	
	
	while (stop != 'Y' && stop != 'y')
	{
		while (i < 20)
		{
			cout << endl;
			i++;
		}
		catalog();
		decision();
		cout << "Do you want to proceed to checkout or continue browsing? (Y-yes / N-no) : ";
		cin >> stop;
		cin.ignore();
	}
	
	
	
	
	
	

//		else
//		{
//			
//		}
	return 0;
}
