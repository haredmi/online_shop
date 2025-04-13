#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;

int ASB[5] = {0}, stockASB[5] = {1,1,1,1,1}, ASZ[5] = {0}, stockASZ[5] = {1, 1, 1, 1, 1}, temporary;
string cart[30];

void decision(int &i)
{
	string code;
	char decision;
	
	cout << "Enter code (\'S\' if you did not interested) : ";
	getline (cin, code);
	
	while (code != "ASB1" && code != "ASB2" && code != "ASB3" && code != "ASB4" && code != "ASB5" && code != "ASZ1" && code != "ASZ2" && code != "ASZ3" && code != "ASZ4" && code != "ASZ5" && code != "s" && code != "S")
	{
		cout << "No such code exist! Please re-enter : ";
		getline (cin, code);
	}
	
	if (code == "ASB1")
	{
			
			if (stockASB[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[0] = 1;
				stockASB[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASB1";
				i++;
			}
	
	}
	else if (code == "ASB2")
	{
			
			if (stockASB[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[1] = 1;
				stockASB[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASB2";
				i++;
			}
	
	}
	else if (code == "ASB3")
	{
			
			if (stockASB[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[2] = 1;
				stockASB[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASB3";
				i++;
			}
	
	}
	else if (code == "ASB4")
	{
			
			if (stockASB[3] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[3] = 1;
				stockASB[3] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASB4";
				i++;
			}
	
	}
	else if (code == "ASB5")
	{
			
			if (stockASB[4] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASB[4] = 1;
				stockASB[4] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASB5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	
	if (code == "ASZ1")
	{
			
			if (stockASZ[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASZ[0] = 1;
				stockASZ[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASZ1";
				i++;
			}
	
	}
	else if (code == "ASZ2")
	{
			
			if (stockASZ[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASZ[1] = 1;
				stockASZ[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASZ2";
				i++;
			}
	
	}
	else if (code == "ASZ3")
	{
			
			if (stockASZ[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASZ[2] = 1;
				stockASZ[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASZ3";
				i++;
			}
	
	}
	else if (code == "ASZ4")
	{
			
			if (stockASZ[3] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASZ[3] = 1;
				stockASZ[3] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASZ4";
				i++;
			}
	
	}
	else if (code == "ASZ5")
	{
			
			if (stockASZ[4] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASZ[4] = 1;
				stockASZ[4] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASZ5";
				i++;
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
	
	for (int i = 0; i < 5; i++)
	{
		cout << "ordered [" << i+1 << "] : " << ASZ[i] << endl;
		cout << "Stock [" << i+1 << "] : " << stockASZ[i] << endl << endl;
	}
	
	
}

void catalog()
{
	string brand, asicsSho, adidasSho, nbSho, pumaSho, nikeSho;
	
	//product display
	cout << endl;
	cout << "What brand are you looking for?";
	cout << " \n\nEnter brand of shoes (Adidas, Nike, Asics, NewBalance, Puma): ";
	getline (cin,brand);
	system("CLS");
	if (brand == "ASICS" || brand == "asics" || brand == "Asics")
	{
		cout << "\nWhat asics's shoes you want to buy?";
		cout << " \n\nEnter asics's shoes (NYC, KAHANA, NIMBUS, KAYANO): ";
		getline (cin,asicsSho);
		
		system("CLS");
		
		if (asicsSho == "NYC" || asicsSho == "nyc")
		{
			cout << endl << right << setw(32) << "[PREVIEW ASICS NYC]" << "\n";
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANC1" <<  "|" << setw (14) << " BLACK" <<  "|" << right << setw (11) << " 8 " <<  "|" << setw (11) << " 289.99" <<  "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANC2" <<  "|" << setw (14) << " GREY" <<  "|" << right << setw (11) << " 8 " <<  "|" << setw (11) << " 289.99" <<  "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANC3" <<  "|" << setw (14) << " BROWN" <<  "|" << right << setw (11) << " 7 " <<  "|" << setw (11) << " 289.99" <<  "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANC4" <<  "|" << setw (14) << " PINK" <<  "|" << right << setw (11) << " 6 " <<  "|" << setw (11) << " 289.99" <<  "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANC5" <<  "|" << setw (14) << " LIGHT PURPLE" <<  "|" << right << setw (11) << " 6 " <<  "|" << setw (11) << " 289.99" <<  "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (asicsSho == "KAHANA" || asicsSho == "Kahana" || asicsSho == "kahana")
		{
			cout << endl << right << setw(34) << "[PREVIEW ASICS KAHANA]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKH1" << "|" << setw (14) << " BROWN" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKH2" << "|" << setw (14) << " ORANGE GREY" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKH3" << "|" << setw (14) << " BLUE WHITE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKH4" << "|" << setw (14) << " GREEN WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKH5" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (asicsSho == "NIMBUS" || asicsSho == "Nimbus" || asicsSho == "nimbus")
		{
			cout << endl << right << setw(34) << "[PREVIEW ASICS NIMBUS]" << endl;
			cout << left << setfill ('-') << setw (48) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (16) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (47) << "-" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANB1" << "|" << setw (16) << " BLUE BLACK" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANB2" << "|" << setw (16) << " PURPLE BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " ANB3" << "|" << setw (16) << " TURQUOISE GREY" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << left << setfill ('-') << setw (48) << " " << endl;
		}
		else if (asicsSho == "KAYANO" || asicsSho == "Kayano" || asicsSho == "kayano")
		{
			cout << endl << right << setw(34) << "[PREVIEW ASICS KAYANO]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKY1" << "|" << setw (14) << " GOLD BLACK" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKY2" << "|" << setw (14) << " WHITE CREAM" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKY3" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKY4" << "|" << setw (14) << " PURPLE GREY" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << setfill (' ') << left << setw (6) << " AKY5" << "|" << setw (14) << " WHITE RED" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
			
	}
	
	else if (brand == "Adidas" || brand == "adidas" || brand == "ADIDAS")
	{
		cout << "\nWhat adidas's shoes you want to buy?";
		cout << " \n\nEnter adidas's shoes (SAMBA, SPEZIAL, SUPERSTAR, CAMPUS, GAZELLE): ";
		getline (cin,adidasSho);
		
		system("CLS");
		
		if (adidasSho == "samba" || adidasSho == "SAMBA" || adidasSho == "Samba")
		{
			cout << endl << right << setw(34) << setfill (' ') << "[PREVIEW ADIDAS SAMBA]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASB1" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASB2" << "|" << setw (14) << " BLUE WHITE" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASB3" << "|" << setw (14) << " BROWN" << "|" << right <<setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASB4" << "|" << setw (14) << " GREEN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASB5" << "|" << setw (14) << " MAROON BLACK" << "|" << right <<setw (11) << "10 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (adidasSho == "spezial" || adidasSho == "SPEZIAL" || adidasSho == "Spezial")
		{
			cout << endl << right << setw(35) << setfill (' ') << "[PREVIEW ADIDAS SPEZIAL]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASZ1" << "|" << setw (14) << " BLUE MAROON" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASZ2" << "|" << setw (14) << " LIGHT BLUE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASZ3" << "|" << setw (14) << " YELLOW" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASZ4" << "|" << setw (14) << " GREEN" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASZ5" << "|" << setw (14) << " WHITE CREAM" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (adidasSho == "superstar" || adidasSho == "SUPERSTAR" || adidasSho == "Superstar")
		{
			cout << endl << right << setw(36) << "[PREVIEW ADIDAS SUPERSTAR]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASS1" << "|" << setw (14) << " BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ASS2" << "|" << setw (14) << " WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "199.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (adidasSho == "campus" || adidasSho == "CAMPUS" || adidasSho == "Campus")
		{
			cout << endl << right << setw(35) << "[PREVIEW ADIDAS CAMPUS]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ACP1" << "|" << setw (14) << " BLACK" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ACP2" << "|" << setw (14) << " WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " ACP3" << "|" << setw (14) << " DARK BLUE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
		else if (adidasSho == "gazelle" || adidasSho == "GAZELLE" || adidasSho == "Gazelle")
		{
			cout << endl << right << setw(35) << "[PREVIEW ADIDAS GAZELLE]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " AGZ1" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " AGZ2" << "|" << setw (14) << " BLUE WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " AGZ3" << "|" << setw (14) << " BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " AGZ4" << "|" << setw (14) << " GREEN" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " AGZ5" << "|" << setw (14) << " MAROON BLACK" << "|" << right << setw (11) << "6 " << "|" <<setw (11) << "249.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
	}
	
	if (brand == "NIKE" || brand == "Nike" || brand == "nike")
	{
		cout << "\nWhat nike's shoes you want to buy?";
		cout << " \n\nEnter nike's shoes (SHOX, CORTEZ, VOMERO 5, KILLSHOT 2, P6000): ";
		getline (cin,nikeSho);
		
		system("CLS");
		
		if (nikeSho == "SHOX" || nikeSho == "Shox" || nikeSho == "shox")
		{
			cout << endl << right << setw(31) << "[PREVIEW NIKE SHOX]" << endl;
			cout << left << setfill ('-') << setw (42) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (10) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (41) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSX1" << "|" << setw (10) << " WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSX2" << "|" << setw (10) << " BLACK" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSX3" << "|" << setw (10) << " BLUE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSX4" << "|" << setw (10) << " RED" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << left << setfill ('-') << setw (42) << " " << endl;
		}
		else if (nikeSho == "CORTEZ" || nikeSho == "Cortez" || nikeSho == "cortez")
		{
			cout << endl << right << setw(34) << "[PREVIEW NIKE CORTEZ]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NCT1" << "|" << setw (14) << "RED" << "|" << right <<setw (11) << "7 " << "|" << setw (11) << "219.99" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NCT2" << "|" << setw (14) << "DARK BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NCT3" << "|" << setw (14) << "DARK BLUE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NCT4" << "|" << setw (14) << "PURPLE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NCT5" << "|" << setw (14) << "WHITE PINK" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nikeSho == "VOMERO 5" || nikeSho == "Vomero 5" || nikeSho == "vomero 5" || nikeSho == "VOMERO5" || nikeSho == "Vomero5" || nikeSho == "vomero5")
		{
			cout << endl << right << setw(34) << "[PREVIEW NIKE VOMERO 5]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NVM1" << "|" << setw (14) << " YELLOW WHITE" << "|" << right << setw (11) << "8" << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NVM2" << "|" << setw (14) << " GREY" << "|" << right << setw (11) << "7" << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NVM3" << "|" << setw (14) << " BEIGE" << "|" << right << setw (11) << "8" << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NVM4" << "|" << setw (14) << " DARK BROWN" << "|" << right << setw (11) << "9" << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NVM5" << "|" << setw (14) << " LIGHT PINK" << "|" << right << setw (11) << "6" << "|" << setw (11) << "229.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nikeSho == "KILLSHOT 2" || nikeSho == "Killshot 2" || nikeSho == "killshot 2" || nikeSho == "KILLSHOT2" || nikeSho == "Killshot2" || nikeSho == "killshot2")
		{
			cout << endl << right << setw(36) << "[PREVIEW NIKE KILLSHOT 2]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NKS1" << "|" << setw (14) << " WHITE BLACK" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NKS2" << "|" << setw (14) << " WHITE BLUE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NKS3" << "|" << setw (14) << " WHITE RED" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NKS4" << "|" << setw (14) << " WHITE GREEN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NKS5" << "|" << setw (14) << " WHITE BROWN" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
		else if (nikeSho == "P6000" || nikeSho == "p6000" || nikeSho == "P 6000" || nikeSho == "p 6000")
		{
			cout << endl << right << setw(34) << "[PREVIEW NIKE P6000]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NPS1" << "|" << setw (14) << "DARK BLUE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NPS2" << "|" << setw (14) << "GREEN GREY" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NPS3" << "|" << setw (14) << "BLUE GREY" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NPS4" << "|" << setw (14) << "BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NPS5" << "|" << setw (14) << "WHITE" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "249.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
	}
	
	if (brand == "NEWBALANCE" || brand == "newbalance" || brand == "new balance" || brand == "NEW BALANCE" || brand == "New Balance")
	{
		cout << "\nWhat nike's shoes you want to buy?";
		cout << " \n\nEnter nike's shoes (1906R, 327, , 2002R, 9060, 550): ";
		getline (cin,nbSho);
		
		system("CLS");
		
		if (nbSho == "1906R" || nbSho == "1906r" || nbSho == "1906 R" || nbSho == "1906 r")
		{
			cout << endl << right << setw(37) << "[PREVIEW NEW BALANCE 1906R]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSR1" << "|" << setw (14) << "WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "319.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSR2" << "|" << setw (14) << "BLACK GREY" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "319.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSR3" << "|" << setw (14) << "DARK BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "319.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSR4" << "|" << setw (14) << "YELLOW GREY" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "319.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nbSho == "327")
		{
			cout << endl << right << setw(35) << "[PREVIEW NEW BALANCE 327]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NTH1" << "|" << setw (14) << " MAROON" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NTH2" << "|" << setw (14) << " GREEN" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NTH3" << "|" << setw (14) << " RED" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NTH4" << "|" << setw (14) << " DARK BLUE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NTH5" << "|" << setw (14) << " BLACK CREAM" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "219.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nbSho == "2002R" || nbSho == "2002r" || nbSho == "2002 R" || nbSho == "2002 r")
		{
			cout << endl << right << setw(37) << "[PREVIEW NEW BALANCE 2002R]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NZR1" << "|" << setw (14) << " GREY" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "299.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NZR2" << "|" << setw (14) << " LIGHT BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "299.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NZR3" << "|" << setw (14) << " BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "299.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NZR4" << "|" << setw (14) << " DARK GREEN" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "299.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NZR5" << "|" << setw (14) << " BLUE CREAM" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "299.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nbSho == "9060")
		{
			cout << endl << right << setw(36) << "[PREVIEW NEW BALANCE 9060]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSS1" << "|" << setw (14) << " DARK BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSS2" << "|" << setw (14) << " BLUE WHITE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSS3" << "|" << setw (14) << " PINK" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSS4" << "|" << setw (14) << " GREY BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NSS5" << "|" << setw (14) << " DARK GREEN" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "269.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (nbSho == "550")
		{
			cout << endl << right << setw(35) << "[PREVIEW NEW BALANCE 550]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NFF1" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NFF2" << "|" << setw (14) << " RED WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NFF3" << "|" << setw (14) << " GREEN CREAM" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NFF4" << "|" << setw (14) << " BLUE YELLOW" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " NFF5" << "|" << setw (14) << " BLACK RED" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "229.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}	
	}
	
	if (brand == "PUMA" || brand == "Puma" || brand == "puma")
	{
		cout << "\nWhat nike's shoes you want to buy?";
		cout << " \n\nEnter puma's shoes (PALERMO, SPEEDCAT, SUEDE): ";
		getline (cin,pumaSho);
		
		system("CLS");
		
		if (pumaSho == "PALERMO" || pumaSho == "Palermo" || pumaSho == "palermo")
		{
			cout << endl << right << setw(34) << "[PREVIEW PUMA PALERMO]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PPL1" << "|" << setw (14) << " BLACK WHITE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "159.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PPL2" << "|" << setw (14) << " GREEN WHITE" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "159.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PPL3" << "|" << setw (14) << " PINK GREEN" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "159.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PPL4" << "|" << setw (14) << " BLUE WHITE" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "159.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PPL5" << "|" << setw (14) << " BLUE RED" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "159.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (pumaSho == "SPEEDCAT" || pumaSho == "SPEED CAT" || pumaSho == "speedcat" || pumaSho == "speed cat" || pumaSho == "Speed cat")
		{
			cout << endl << right << setw(35) << "[PREVIEW PUMA SPEEDCAT]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSC1" << "|" << setw (14) << " DARK BROWN" << "|" << right << setw (11) << "9 " << "|" << setw (11) << "189.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSC2" << "|" << setw (14) << " BLACK" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "189.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSC3" << "|" << setw (14) << " BLUE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "189.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSC4" << "|" << setw (14) << " PINK" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "189.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSC5" << "|" << setw (14) << " GREY" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "189.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
		else if (pumaSho == "SUEDE" || pumaSho == "Suede" || pumaSho == "suede")
		{
			cout << endl << right << setw(33) << "[PREVIEW PUMA SUEDE]" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
			cout << "|" << setfill (' ') << setw (6) << " CODE" <<  "|" << setw (14) << " COLOURS" <<  "|" << setw (11) << " SIZE (UK)" <<  "|" << setw (11) << " PRICE (RM)" <<  "|" << endl;
			cout << "|" << setfill ('-') << setw (45) << "-" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSD1" << "|" << setw (14) << " GREY" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSD2" << "|" << setw (14) << " PINK" << "|" << right << setw (11) << "6 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSD3" << "|" << setw (14) << " BLACK" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSD4" << "|" << setw (14) << " BLUE" << "|" << right << setw (11) << "7 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << "|" << left << setfill (' ') << setw (6) << " PSD5" << "|" << setw (14) << " RED" << "|" << right << setw (11) << "8 " << "|" << setw (11) << "259.99" << "|" << endl;
			cout << left << setfill ('-') << setw (46) << " " << endl;
		}
			
	}

}

int main() 
{
	string user, pass, contact, street, neighborhood, city, state, code;
	char stop;
	int i = 0;
	
	cout << " -------------------------------------------- " << endl;
	cout << "|         Welcome to Shoe Thrift Shop.       |" << endl;
	cout << " -------------------------------------------- " << endl;
	
	cout << "            -+ Profile Creation +-            " << endl;
	cout << "   Username     :   ";
	getline (cin, user);
	cout << "   Password     :   ";
	getline (cin, pass);
	cout << "   Phone Number :   ";
	getline (cin, contact); 
	cout << "   Address :- " << endl;
	cout << "   Street Name  :   ";
	getline(cin,street);
	cout << "   Neighborhood :   ";
	getline(cin,neighborhood);
	cout << "   Postcode     :   ";
	getline(cin,code);	
	cout << "   City         :   ";
	getline(cin,city);
	cout << "   State        :   ";
	getline(cin,state);	
	
	//greeting
	cout << "\n\nW";
	Sleep(100);
	cout << "e";
	Sleep(100);
	cout << "l";
	Sleep(100);
	cout << "c";
	Sleep(100);
	cout << "o";
	Sleep(100);
	cout << "m";
	Sleep(100);
	cout << "e";
	Sleep(100);
	cout << " ";
	Sleep(100);
	cout << user;
	Sleep(100);
	cout << "!";
	Sleep(1500);
	
	system("cls");
	
	while (stop != 'Y' && stop != 'y')
	{
		catalog();
		decision(i);
		cout << "Do you want to proceed to checkout or continue browsing? (Y-checkout / N-continue) : ";
		cin >> stop;
		cin.ignore();
		system("CLS");
	}
	
	for (int X = 0; X < 30; X++)
	{
		cout << "cart [" << X << "] : " << cart[X] << endl;
	}

	return 0;
}
