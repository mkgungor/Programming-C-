//Murat Gungor
#include <iostream>
#include <fstream>
#include <string> // getline
using namespace std;

int main()
{
	const string INPUT_FILE_NAME = "input.txt";
	int year;
	string fullName;
	ifstream fin; // file in
	fin.open(INPUT_FILE_NAME);

	if (!fin.is_open()) 
	{
		cout << INPUT_FILE_NAME << " cannot be found\n";
		return 0;	
	}

	//cout << "Please enter the year: ";
	//cin >> year;//console in  - see in

	//Reading from file
	fin >> year;//console in  - see in
	fin.ignore();
	getline(fin, fullName);

	ofstream fout; // file out 
	fout.open("output.txt");

	// Output to console
	fout << "You were born :" << year << endl;
	fout << "You name is :" << fullName << endl;

	cout << "Hello" << endl; // console out // see out   
}
