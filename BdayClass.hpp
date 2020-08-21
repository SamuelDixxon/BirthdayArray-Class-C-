#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class BirthdayArray {
	public:
	vector<string> Dates, Names;
	string Category, BirthDate, AnyName;
	int length, i;


		BirthdayArray(string newname){

			Category = newname;  // ie friends family etc

		}

		//Methods

		void add_person_and_date(){

			cout << "Enter the name here: ";
			cin >> AnyName;
			cout << "Enter the Date in format MM-DD-YY here: ";
			cin >> BirthDate;

			Names.push_back(AnyName);
			Dates.push_back(BirthDate);

			}

		void print_out(){
			length = Names.size();

			for(int i = 0; i < length; i++){
				cout << Names[i] << "  :  " << Dates[i] << "\n";
				
			}
		}

		void write_csv(){
		    std::ofstream myFile(Category);
		    
		    // Send data to the stream
		    for(int i = 0; i < Dates.size(); ++i){
		        myFile << Names[i] << "," << Dates[i]  << "\n";
		    }
		    
		    // Close the file
		    myFile.close();
		}



};


