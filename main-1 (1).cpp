#include <cstdlib>
#include <iostream>

#include"Banking_Client.h"
#include"Brokerage_Client.h"

using namespace std;

int menu()
{
	int option;
	cout<<"****MAIN MENU****";
	cout<<"====================";
	cout<<"1. Add a checking client";
	cout<<"2. Add an investment client";
	cout<<"3. View ALL checking clients";
	cout<<"4. View ALL investment clients";
	cout<<"5. Exit the program"; 
	cin>>option;
	return option;
}

int main(int argc, char *argv[])
{
	Banking_Client* b1;
	
    int choice;
    do
	{
    //system("CLS");
	choice = menu();
	switch(choice)
	{
		case 1:
			Banking_Client();
			break;
		case 2:
			Brokerage_Client();
			break;
		case 3:
			b1->print();
			break;
		case 4:
			break;
		case 5:
			cout<<"Goodbye!";
			break;
			
		
		}
		system("PAUSE");
			
	}while(choice!=5);
    

    return EXIT_SUCCESS;
}
