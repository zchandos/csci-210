/* Program name: Pet Rescue
*  Author: Zachary Chandos
*  Date last updated: 01/31/2023
* Purpose: Read and write to a text file using file i/o
*/

#include <iostream> 
#include <fstream>
#include <string>


using namespace std;

int main() {

	//VARIABLE DECS
	ofstream oFile;
	ifstream iFile;

	int isRunning = 1;

	//RUNS THE PROGRAM IN INFINITE LOOP UNLESS TERMINATED WITHIN LOOP
	while (isRunning == 1) {

		string x;
		int selection;

		//OPEN INPUT AND OUTPUT FILE
		oFile.open("Text.txt", ios::app); //APPENDS TEXT SO THAT FILE DOESNT WIPE
		iFile.open("Text.Txt");

		//MENU OPTIONS
		cout << "Welcome to Pet Rescue! Press 1 to add a Pet. Press 2 to view all pets. Press 3 to end program." << endl;
		cin >> selection;

		if (selection == 1) {

			string name;
			string specie;
			string breed;
			string color;

			cout << "Please enter pets name (NO SPACES): " << endl;
			cin >> name;
			cout << "Please enter pets specie (NO SPACES): " << endl;
			cin >> specie;
			cout << "Please enter pets breed (NO SPACES): " << endl;
			cin >> breed;
			cout << "Please enter pets color (NO SPACES): " << endl;
			cin >> color;

			oFile <<"|| " << name << " || " << specie << " || " << breed << " || " << color << " || " << endl;
		}

		//OUTPUTS TEXT FILE TO CONSOLE
		if (selection == 2) {

			while (getline(iFile, x)) {
				cout << x << endl;

			}
		}

		//ENDS PROGRAM
		if (selection == 3) {
			return 0;
		}

		//CLOSE INPUT AND OUTPUT FILE
		oFile.close();
		iFile.close();

	}
	
}