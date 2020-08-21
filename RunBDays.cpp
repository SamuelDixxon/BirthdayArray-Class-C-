#include <iostream>
#include <string>
#include "BdayClass.hpp"
using namespace std;


int main(){

	string NameOfCategory;
	cout <<  "Enter the name of category to be entering birthdays for (ie. friends or family): ";
	cin >> NameOfCategory;
	BirthdayArray Firstarray(NameOfCategory);


	string todo;
	cout << "What do you want to do? (add, view, stop): ";
	cin >> todo;

	while(todo != "stop"){

		if(todo == "add"){
			Firstarray.add_person_and_date();
		}
		else if(todo == "view"){
			Firstarray.print_out();
		}
		else if(todo =="toFile"){
			Firstarray.write_csv();
		}		
		else{
			cout << "Please try again.\n";
			cout << "What do you want to do? (add, view, stop): ";
			cin >> todo;
			break;
		}

		cout << "What do you want to do? (add, view, stop, toFile): ";
		cin >> todo;


	}



		
	
};