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
	
	

	return 0;
}
