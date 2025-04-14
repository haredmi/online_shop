#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

int ASB[5] = {0}, stockASB[5] = {1, 1, 1, 1, 1}, ASZ[5] = {0}, stockASZ[5] = {1, 1, 1, 1, 1}, ASS[2] = {0}, stockASS[2] = {1, 1}, ACP[3] = {0}, stockACP[3] = {1, 1, 1},
	AGZ[5] = {0}, stockAGZ[5] = {1, 1, 1, 1, 1}, NSR[4] = {0}, stockNSR[4] = {1, 1, 1, 1}, NTH[5] = {0}, stockNTH[5] = {1, 1, 1, 1, 1}, NZR[5] = {0}, stockNZR[5] = {1, 1, 1, 1, 1}, NSS[5] = {0}, stockNSS[5] = {1, 1, 1, 1, 1},
	NFF[5] = {0}, stockNFF[5] = {1, 1, 1, 1, 1}, PPL[5] = {0}, stockPPL[5] = {1, 1, 1, 1, 1}, PSC[5] = {0}, stockPSC[5] = {1, 1, 1, 1, 1}, PSD[5] = {0}, stockPSD[5] = {1, 1, 1, 1, 1}, ANC[5] = {0}, stockANC[5] = {1, 1, 1, 1, 1}, 
	AKH[5] = {0}, stockAKH[5] = {1, 1, 1, 1, 1}, AKY[5] = {0}, stockAKY[5] = {1, 1, 1, 1, 1}, ANB[5] = {0}, stockANB[3] = {1, 1, 1};
string cart[30];
float total = 0;

void decision(int &i)
{
	string code;
	char decision;
	
	cout << "Enter code (\'S\' if you did not interested) : ";
  
	while (code != "ASB1" && code != "ASB2" && code != "ASB3" && code != "ASB4" && code != "ASB5" && code != "ASZ1" && code != "ASZ2" && code != "ASZ3" && code != "ASZ4" && code != "ASZ5" 
	&& code != "s" && code != "S")
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
	
		if (code == "ASS1")
	{
			
			if (stockASS[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASS[0] = 1;
				stockASS[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASS1";
				i++;
			}
	}
	else if (code == "ASS2")
	{
			
			if (stockASS[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ASS[1] = 1;
				stockASS[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ASS2";
				i++;
			}
	}
		else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "ACP1")
	{
			
			if (stockACP[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ACP[0] = 1;
				stockACP[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ACP1";
				i++;
			}
	
	}
	else if (code == "ACP2")
	{
			
			if (stockACP[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ACP[1] = 1;
				stockACP[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ACP2";
				i++;
			}
	
	}
	else if (code == "ACP3")
	{
			
			if (stockACP[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ACP[2] = 1;
				stockACP[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ACP3";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	if (code == "AGZ1")
	{
			
			if (stockAGZ[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AGZ[0] = 1;
				stockAGZ[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AGZ1";
				i++;
			}
	
	}
	else if (code == "AGZ2")
	{
			
			if (stockAGZ[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AGZ[1] = 1;
				stockAGZ[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AGZ2";
				i++;
			}
	}

	if (code == "AGZ3")
	{
			
			if (stockAGZ[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AGZ[0] = 1;
				stockAGZ[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AGZ3";
				i++;
			}
	
	}
	else if (code == "AGZ4")
	{
			
			if (stockAGZ[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AGZ[1] = 1;
				stockAGZ[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AGZ4";
				i++;
			}
	
	}
	else if (code == "AGZ5")
	{
			
			if (stockAGZ[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AGZ[2] = 1;
				stockAGZ[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AGZ5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
  }

		if (code == "NSR1")
	{
			
			if (stockNSR[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSR[0] = 1;
				stockNSR[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSR1";
				i++;
			}
	
	}
	else if (code == "NSR2")
	{
			
			if (stockNSR[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSR[1] = 1;
				stockNSR[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSR2";
				i++;
			}
	}

	if (code == "NSR3")
	{
			
			if (stockNSR[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSR[0] = 1;
				stockNSR[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSR3";
				i++;
			}
	
	}
	else if (code == "NSR4")
	{
			
			if (stockNSR[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSR[1] = 1;
				stockNSR[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSR4";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}

		if (code == "NTH1")
	{
			
			if (stockNTH[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NTH[0] = 1;
				stockNTH[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NTH1";
				i++;
			}
	
	}
	else if (code == "NTH2")
	{
			
			if (stockNTH[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NTH[1] = 1;
				stockNTH[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NTH2";
				i++;
			}
	}

	if (code == "NTH3")
	{
			
			if (stockNTH[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NTH[0] = 1;
				stockNTH[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NTH3";
				i++;
			}
	
	}
	else if (code == "NTH4")
	{
			
			if (stockNTH[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NTH[1] = 1;
				stockNTH[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NTH4";
				i++;
			}
	
	}
	else if (code == "NTH5")
	{
			
			if (stockNTH[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NTH[2] = 1;
				stockNTH[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NTH5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	if (code == "NZR1")
	{
			
			if (stockNZR[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NZR[0] = 1;
				stockNZR[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NZR1";
				i++;
			}
	
	}
	else if (code == "NZR2")
	{
			
			if (stockNZR[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NZR[1] = 1;
				stockNZR[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NZR2";
				i++;
			}
	}

	if (code == "NZR3")
	{
			
			if (stockNZR[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NZR[0] = 1;
				stockNZR[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NZR3";
				i++;
			}
	
	}
	else if (code == "NZR4")
	{
			
			if (stockNZR[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NZR[1] = 1;
				stockNZR[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NZR4";
				i++;
			}
	
	}
	else if (code == "NZR5")
	{
			
			if (stockNZR[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NZR[2] = 1;
				stockNZR[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NZR5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	if (code == "NSS1")
	{
			
			if (stockNSS[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSS[0] = 1;
				stockNSS[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSS1";
				i++;
			}
	
	}
	else if (code == "NSS2")
	{
			
			if (stockNSS[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSS[1] = 1;
				stockNSS[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSS2";
				i++;
			}
	}

	if (code == "NSS3")
	{
			
			if (stockNSS[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSS[0] = 1;
				stockNSS[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSS3";
				i++;
			}
	
	}
	else if (code == "NSS4")
	{
			
			if (stockNSS[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSS[1] = 1;
				stockNSS[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSS4";
				i++;
			}
	
	}
	else if (code == "NSS5")
	{
			
			if (stockNSS[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NSS[2] = 1;
				stockNSS[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NSS5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}

		if (code == "NFF1")
	{
			
			if (stockNFF[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NFF[0] = 1;
				stockNFF[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NFF1";
				i++;
			}
	
	}
	else if (code == "NFF2")
	{
			
			if (stockNFF[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NFF[1] = 1;
				stockNFF[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NFF2";
				i++;
			}
	}

	if (code == "NFF3")
	{
			
			if (stockNFF[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NFF[0] = 1;
				stockNFF[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NFF3";
				i++;
			}
	
	}
	else if (code == "NFF4")
	{
			
			if (stockNFF[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NFF[1] = 1;
				stockNFF[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NFF4";
				i++;
			}
	
	}
	else if (code == "NFF5")
	{
			
			if (stockNFF[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				NFF[2] = 1;
				stockNFF[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "NFF5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	if (code == "PPL1")
	{
			
			if (stockPPL[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PPL[0] = 1;
				stockPPL[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PPL1";
				i++;
			}
	
	}
	else if (code == "PPL2")
	{
			
			if (stockPPL[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PPL[1] = 1;
				stockPPL[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PPL2";
				i++;
			}
	}

	if (code == "PPL3")
	{
			
			if (stockPPL[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PPL[0] = 1;
				stockPPL[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PPL3";
				i++;
			}
	
	}
	else if (code == "PPL4")
	{
			
			if (stockPPL[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PPL[1] = 1;
				stockPPL[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PPL4";
				i++;
			}
	
	}
	else if (code == "PPL5")
	{
			
			if (stockPPL[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PPL[2] = 1;
				stockPPL[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PPL5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "PSC1")
	{
			
			if (stockPSC[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSC[0] = 1;
				stockPSC[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSC1";
				i++;
			}
	
	}
	else if (code == "PSC2")
	{
			
			if (stockPSC[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSC[1] = 1;
				stockPSC[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSC2";
				i++;
			}
	}

	if (code == "PSC3")
	{
			
			if (stockPSC[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSC[0] = 1;
				stockPSC[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSC3";
				i++;
			}
	
	}
	else if (code == "PSC4")
	{
			
			if (stockPSC[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSC[1] = 1;
				stockPSC[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSC4";
				i++;
			}
	
	}
	else if (code == "PSC5")
	{
			
			if (stockPSC[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSC[2] = 1;
				stockPSC[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSC5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "PSD1")
	{
			
			if (stockPSD[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSD[0] = 1;
				stockPSD[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSD1";
				i++;
			}
	
	}
	else if (code == "PSD2")
	{
			
			if (stockPSD[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSD[1] = 1;
				stockPSD[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSD2";
				i++;
			}
	}

	if (code == "PSD3")
	{
			
			if (stockPSD[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSD[0] = 1;
				stockPSD[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSD3";
				i++;
			}
	
	}
	else if (code == "PSD4")
	{
			
			if (stockPSD[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSD[1] = 1;
				stockPSD[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSD4";
				i++;
			}
	
	}
	else if (code == "PSD5")
	{
			
			if (stockPSD[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				PSD[2] = 1;
				stockPSD[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "PSD5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "ANC1")
	{
			
			if (stockANC[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANC[0] = 1;
				stockANC[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANC1";
				i++;
			}
	
	}
	else if (code == "ANC2")
	{
			
			if (stockANC[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANC[1] = 1;
				stockANC[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANC2";
				i++;
			}
	}
  else if (code == "ANC3")
	{
			
			if (stockANC[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANC[0] = 1;
				stockANC[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANC3";
				i++;
			}
	
	}
	else if (code == "ANC4")
	{
			
			if (stockANC[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANC[1] = 1;
				stockANC[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANC4";
				i++;
			}
	
	}
	else if (code == "ANC5")
	{
			
			if (stockANC[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANC[2] = 1;
				stockANC[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANC5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
	if (code == "AKH1")
	{
			
			if (stockAKH[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKH[0] = 1;
				stockAKH[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKH1";
				i++;
			}
	
	}
	else if (code == "AKH2")
	{
			
			if (stockAKH[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKH[1] = 1;
				stockAKH[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKH2";
				i++;
			}
  }
	else if (code == "AKH3")
	{
			
			if (stockAKH[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKH[0] = 1;
				stockAKH[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKH3";
				i++;
			}
	
	}
	else if (code == "AKH4")
	{
			
			if (stockAKH[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKH[1] = 1;
				stockAKH[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKH4";
				i++;
			}
	
	}
	else if (code == "AKH5")
	{
			
			if (stockAKH[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKH[2] = 1;
				stockAKH[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKH5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "AKY1")
	{
			
			if (stockAKY[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKY[0] = 1;
				stockAKY[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKY1";
				i++;
			}
	
	}
	else if (code == "AKY2")
	{
			
			if (stockAKY[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKY[1] = 1;
				stockAKY[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKY2";
				i++;
			}
	}
  else if (code == "AKY3")
	{
			
			if (stockAKY[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKY[0] = 1;
				stockAKY[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKY3";
				i++;
			}
	
	}
	else if (code == "AKY4")
	{
			
			if (stockAKY[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKY[1] = 1;
				stockAKY[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKY4";
				i++;
			}
	
	}
	else if (code == "AKY5")
	{
			
			if (stockAKY[2] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				AKY[2] = 1;
				stockAKY[2] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "AKY5";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
	
		if (code == "ANB1")
	{
			
			if (stockANB[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANB[0] = 1;
				stockANB[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANB1";
				i++;
			}
	
	}
	else if (code == "ANB2")
	{
			
			if (stockANB[1] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANB[1] = 1;
				stockANB[1] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANB2";
				i++;
			}
	}
  else if (code == "ANB3")
	{
			
			if (stockANB[0] == 0)
			{
				cout << "Out of stock :( " << endl << endl << endl << endl;
			}
			else
			{
				ANB[0] = 1;
				stockANB[0] = 0;
				cout << "Sucessfully added to cart!" << endl << endl << endl << endl;
				cart[i] = "ANB3";
				i++;
			}
	
	}
	else
	{
		cout << "No item added to cart. " << endl << endl << endl << endl;
	}
}
	
void catalog()
{
	string brand, asicsSho, adidasSho, nbSho, pumaSho, nikeSho;
	
	//product display
	cout << endl;
	cout << "What brand are you looking for?";
	cout << " \n\nEnter brand of shoes (Adidas, Asics, NewBalance, Puma): ";
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
			cout << endl << right << setw(34) << "[PREVIEW ADIDAS SAMBA]" << endl;
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
			cout << endl << right << setw(35) << "[PREVIEW ADIDAS SPEZIAL]" << endl;
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

void delay (string message)
{
	cout << message;
	Sleep(100);
}

void date()
{
	
	// Get the timestamp for the current date and time
  time_t timestamp;
  time(&timestamp);

  // Display the date and time represented by the timestamp
  cout << ctime(&timestamp);
}

void totalAmount()
{
	for (int i=0; i<17; i++)
	{
		
		if(cart[i] == "ASB1" || cart[i] == "ASB2" || cart[i] == "ASB3" || cart[i] == "ASB4" || cart[i] == "ASB5")
		{
			total += 229.99;
		}
		else if(cart[i] == "ASZ1" || cart[i] == "ASZ2" || cart[i] == "ASZ3" || cart[i] == "ASZ4" || cart[i] == "ASZ5")
		{
			total += 229.99;
		}
		else if(cart[i] == "ASS1" || cart[i] == "ASS2")
		{
			total += 199.99;
		}
		else if(cart[i] == "ACP1" || cart[i] == "ACP2" || cart[i] == "ACP3")
		{
			total += 269.99;
		}
		else if(cart[i] == "AGZ1" || cart[i] == "AGZ2" || cart[i] == "AGZ3" || cart[i] == "AGZ4" || cart[i] == "AGZ5")
		{
			total += 249.99;
		}
		else if(cart[i] == "ANC1" || cart[i] == "ANC2" || cart[i] == "ANC3" || cart[i] == "ANC4" || cart[i] == "ANC5")
		{
			total += 289.99;
		}
		else if(cart[i] == "AKH1" || cart[i] == "AKH2" || cart[i] == "AKH3" || cart[i] == "AKH4" || cart[i] == "AKH5")
		{
			total += 229.99;
		}
		else if(cart[i] == "ANB1" || cart[i] == "ANB2" || cart[i] == "ANB3")
		{
			total += 199.99;
		}
		else if(cart[i] == "AKY1" || cart[i] == "AKY2" || cart[i] == "AKY3" || cart[i] == "AKY4" || cart[i] == "AKY5")
		{
			total += 199.99;
		}
		else if(cart[i] == "NSR1" || cart[i] == "NSR2" || cart[i] == "NSR3" || cart[i] == "NSR4")
		{
			total += 319.99;
		}
		else if(cart[i] == "NTH1" || cart[i] == "NTH2" || cart[i] == "NTH3" || cart[i] == "NTH4" || cart[i] == "NTH5")
		{
			total += 219.99;
		}
		else if(cart[i] == "NZR1" || cart[i] == "NZR2" || cart[i] ==  "NZR3" || cart[i] == "NZR4" || cart[i] == "NZR5")
		{
			total += 299.99;
		}
		else if(cart[i] == "NSS1" || cart[i] == "NSS2" || cart[i] == "NSS3" || cart[i] == "NSS4" || cart[i] == "NSS5")
		{
			total += 269.99;
		}
		else if(cart[i] == "NFF1" || cart[i] == "NFF2" || cart[i] == "NFF3" || cart[i] == "NFF4" || cart[i] == "NFF5")
		{
			total += 229.99;
		}
		else if(cart[i] == "PPL1" || cart[i] == "PPL2" || cart[i] == "PPL3" || cart[i] == "PPL4" || cart[i] == "PPL5")
		{
			total += 159.99;
		}
		else if(cart[i] == "PSC1" || cart[i] == "PSC2" || cart[i] == "PSC3" || cart[i] == "PSC4" || cart[i] == "PSC5")
		{
			total += 189.99;
		}
		else if(cart[i] == "PSD1" || cart[i] == "PSD2" || cart[i] == "PSD3" || cart[i] == "PSD4" || cart[i] == "PSD5")
		{
			total += 259.99;
		}
		
	}
	
}

void invoice(string name, string street, string neighborhood, string code, string state, string contact, string city)
{
	cout << setfill(' ') << setw(40) << ' ' << "SHOE THRIFT SHOP SDN BHD" << endl;
	cout << setw(40) << ' ' << "No. 15, Jalan Bukit Bintang, Bukit Bintang, " << endl;
	cout << setw(40) << ' ' << "55100 Kuala Lumpur, Malaysia" << endl;
	cout << setw(40) << ' ' << "Tel : +60312345678  " << "www.shoethriftshop.com.my" << endl;
	
	
	for (int line=0; line<=85; line++)
		cout << "_";
		
	cout << left << setw(30) << "\nBILLING" << setw(20) << "Invoice" << setw(15) << "No. " << ": IV " << endl;
	cout << left << setw(50) << name << setw(15) << "Your Ref. " << ": 23690" << endl;
	cout << left << setw(50) << street << setw(15) << "Our D/O No  " << ": " << endl;
	cout << left << setw(50) << neighborhood << setw(15) << "Terms " << ": Online Banking" << endl;
	cout << left << setw(6) << code << setw(44) << city << setw(15) << "Date " << ": " ;
	date(); 
	cout << left << setw(50) << state << setw(15) << "Page " << ": 1 of 1" << endl;
	cout << left << setw(50) << contact << setw(15) << "Account code " << ": 3000/M256" << endl;
	
	for (int line=0; line<=85; line++)
		cout << "_";
	
	cout << setw(5) << "\nNo" << setw(10) << "Code" << setw(40) << "Description" << setw(5) << "Qty" << setw(15) << "Price/Unit(RM)" << setw(15) << "Amount(RM)" << endl;

	for (int line=0; line<=85; line++)
		cout << "_";
		
	cout << setw(5) << "\nNO" << setw(10) << "CODE" << setw(30) << "DESCRIPTION" << setw(5) << "QTY" << setw(15) << "PRICE/UNIT" << setw(15) << "AMOUNT" << endl;

	for (int line=0; line<=85; line++)
		cout << "_";
	
	cout << "\nTotal (RM) : " << total << endl;
	
	cout << "\nAll cheques should be crossed and made payable to HARITH'S SHOP SDN BHD" << endl;
	cout << "HLB bank account to \t\t : 012345678901" << endl;
	
	cout << setw(50) << "\n\n\nAuthorised signature" << setw(25) << "Received by";
}


int main() 
{
	string user, pass, address, contact, street, neighborhood, city, state, code;
	int stop, i = 0;
	
	cout << " -------------------------------------------- " << endl;
	cout << "|         Welcome to Shoe Thrift Shop.       |" << endl;
	cout << " -------------------------------------------- " << endl;
	
	cout << "            -+ Profile Creation +-            " << endl;
	cout << " NAME         : ";
	getline(cin, user);
	cout << " PASSWORD     : ";
	getline(cin,pass);
	cout << " NUMBER PHONE : ";
	getline(cin,contact);
	cout << " STREET NAME  : ";
	getline(cin,street);
	cout << " NEIGHBORHOOD : ";
	getline(cin,neighborhood);
	cout << " POSTCODE     : ";
	getline(cin,code);	
	cout << " CITY         : ";
	getline(cin,city);
	cout << " STATE        : ";
	getline(cin,state);	
	
	//greeting
	cout << endl;
	delay ("W");
	delay ("e");
	delay ("l");
	delay ("c");
	delay ("o");
	delay ("m");
	delay ("e");
	delay (" ");
	delay (user);
	cout << "!";
	Sleep(1500);
	
	system("cls");
	
	while (stop != 1)
	{
		catalog();
		decision(i);
		cout << " ------------------------ " << endl;
		
		cout << "| [1] checkout           |" << endl;
		cout << "| [2] continue browsing  |" << endl;
		cout << " ------------------------ " << endl << endl;
		cout << "Choose next step : ";
		cin >> stop;
		cin.ignore();
		system("cls");
	}
	
	for (int X = 0; X < 30; X++)
	{
		cout << "cart [" << X << "] : " << cart[X] << endl;
	}
	
	system("pause");
	system("cls");
	
	invoice(user, street, neighborhood, code, state, contact, city);

	return 0;
}
