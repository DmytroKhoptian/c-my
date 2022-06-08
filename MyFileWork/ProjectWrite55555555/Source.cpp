#include <iostream>
#include <string>
#include <iomanip> //setw

#include <fstream> //1
#include <iostream> //1


using namespace std;

int main()
{
	//class ofstream - to work with file
	ofstream fileOut; //write
	string filename = "E:\\MEGA\\Основы С++\\17Файлы\\MyFileWork\\ProjectWrite55555555\\text321.txt";

	fileOut.open(filename, ofstream :: app);

	if (fileOut.fail())
	{
		cout << "Error opening file!" << endl;
		return 1;
	}

	double d = 5.5;
	int i = 10;
	string s = "Dima";

	fileOut << d <<endl<< i << endl << s << endl ;
	cout << "dfbgsg";
	return 0;
}