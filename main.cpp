#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	string user, pass;
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
	string  brand, adidasSho;
	
	cout << endl;
	cout << "What brand are you looking for?";
	cout << endl;
	cout << " \nEnter brand of shoes (Adidas, Nike, Asics, NewBalance, Puma): ";
	getline (cin,brand);
	if (brand == "Adidas")
	{
		cout << endl;
		cout << setfill ('-') << setw (100) << "-" << endl;
		cout << "What adidas's shoes you want to buy?" << endl;
		cout << " \nEnter adidas's shoes (SAMBA, SPEZIAL, SUPERSTAR, CAMPUS, GAZELLE):";
		getline (cin,adidasSho);
		
		if (adidasSho == "samba")
		{
			cout << endl << "PREVIEW ADIDAS SAMBA" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "NO." << setw (20) << "COLOURS" << setw (30) << "SIZE (UK)" << setw (40) << "PRICE (RM)" << endl;
			cout << setfill ('-') << setw (100) << "-" << endl;
			cout << setfill (' ') << setw (10) << "1." << setw (20) << "BLACK AND WHITE" << setw (30) << "5-10" << setw (40) << "384" << endl;
			cout << setfill (' ') << setw (10) << "2." << setw (20) << "BLUE AND WHITE" << setw (30) << "5-10" << setw (40) << "384" << endl;
			cout << setfill (' ') << setw (10) << "3." << setw (20) << "BROWN" << setw (30) << "5-10" << setw (40) << "384" << endl;
			cout << setfill (' ') << setw (10) << "4." << setw (20) << "GREEN" << setw (30) << "5-10" << setw (40) << "384" << endl;
			cout << setfill (' ') << setw (10) << "5." << setw (20) << "MAROON AND BLACK" << setw (30) << "5-10" << setw (40) << "384" << endl;
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
	return 0;
}
