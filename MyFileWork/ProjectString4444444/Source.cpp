#include <iostream>
#include <string>
#include <iomanip> //setw

#include <fstream> //1
#include <iostream> //1

using namespace std;

int main()
{
	ifstream fileIn; //read
	string filename = "text123.txt";
	fileIn.open(filename);

	string text;

	if (fileIn.fail())
	{
		cout << "Error opening file!" << endl;
		return 1;
	}

	while (true)
	{
		if (fileIn.eof()) break;
		string line;
		getline(fileIn, line);
		text += line+"\n";
		cout << line << endl;
	}

	fileIn.close();


	cout << "\n-------------------\n";
	cout << text;


	return 0;
}